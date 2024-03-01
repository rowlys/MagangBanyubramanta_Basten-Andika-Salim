#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <vector>
#include <map>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "std_msgs/msg/string.hpp"
#include "opencv2/opencv.hpp"
#include "cv_bridge/cv_bridge.h"
#include "tugas_yolo_yolocpp/msg/seen.hpp"
#include <fstream>

using namespace cv;
using namespace std;
using namespace cv::dnn;
using std::placeholders::_1;

// VideoCapture camera(0);

// ifstream filePath(const string& tugas_yolo_yolocpp/coco.names);
    vector<string> class_list;
    ifstream ifs("tugas_yolo_yolocpp/coco.names");
    string line_;
    



// frame = imread("tugas_yolo_yolocpp/traffic.jpeg");

auto seen = tugas_yolo_yolocpp::msg::Seen();

const float WIDTH = 640.0;
const float HEIGHT = 640.0;
const float SCORE_THRESHOLD = 0.5;
const float NMS_THRESHOLD = 0.45;
const float CONFIDENCE_THRESHOLD = 0.45;

const float FONT_SCALE = 0.7;
const int FONT_FACE = FONT_HERSHEY_SIMPLEX;
const int THICKNESS = 1;

Scalar BLACK = Scalar(0,0,0);
Scalar BLUE = Scalar(255,178,50);
Scalar YELLOW = Scalar(0,255,255);
Scalar RED = Scalar(0,0,255);



class Detection : public rclcpp::Node{
    public: 
        Detection() : Node("detection"){
            subscriber_ = this->create_subscription<sensor_msgs::msg::Image>("openCamera", 10, std::bind(&Detection::topic_callback, this, _1));
            publisher_ = this->create_publisher<tugas_yolo_yolocpp::msg::Seen>("yoloOutput", 10);

        }

    private:
        void draw_label(Mat& input_image, string label, int left, int top){
            int baseLine;
            Size label_size = getTextSize(label, FONT_FACE, FONT_SCALE, THICKNESS, &baseLine);
            top = max(top, label_size.height);
            Point topLeft = Point(left, top);
            Point bottomRight = Point(left + label_size.width, top + label_size.height + baseLine);

            rectangle(input_image, topLeft, bottomRight, BLACK, FILLED);
            putText(input_image, label, Point(left, top+label_size.height), FONT_FACE, FONT_SCALE, YELLOW, THICKNESS);
        }

        vector<Mat> pre_process(Mat &input_image, Net &net){
            Mat blob;

            blobFromImage(input_image, blob, 1./255., Size(WIDTH, HEIGHT), Scalar(), true, false);

            net.setInput(blob);

            vector<Mat> outputs;
            net.forward(outputs, net.getUnconnectedOutLayersNames());
            return outputs;
        }

        Mat post_process(Mat &input_image, vector<Mat> &outputs, const vector<string> &list_name){
            vector<int> class_ids;
            vector<float> confidences;
            vector<Rect> boxes;
            int temp = list_name.size();

            float x_factor = input_image.cols / WIDTH;
            float y_factor = input_image.rows / HEIGHT;
            float *data = (float *)outputs[0].data;
            const int dimensions = 85;
            const int rows = 25200;

            for (int i = 0; i < rows; ++i){
                float confidence = data[4];
                if (confidence >= CONFIDENCE_THRESHOLD){
                    
                    cout<<confidence<< " " << temp<<endl;
                    float *classes_scores = data + 5;

                    Mat scores(1, temp, CV_32FC1, classes_scores);

                    Point class_id;
                    double max_class_score;
                    minMaxLoc(scores, 0, &max_class_score, 0, &class_id);

                    if (max_class_score > SCORE_THRESHOLD){
                        confidences.push_back(confidence);
                        class_ids.push_back(class_id.x);

                        float centerX = data[0];
                        float centerY = data[1];

                        float w = data[2];
                        float h = data[3];

                        int left = int((centerX - 0.5 * w) * x_factor);
                        int top = int((centerY - 0.5 * h) * y_factor);
                        int width = int(w * x_factor);
                        int height = int(h * y_factor);

                        // rectangle(input_image, Point(left, top), Point(left + width, top+height), BLUE, 3*THICKNESS);
                        boxes.push_back(Rect(left, top, width, height));
                    }
                }
                
                data+=85;
            }

            vector<int> index;
            NMSBoxes(boxes, confidences, SCORE_THRESHOLD, NMS_THRESHOLD, index);

            for (int i = 0; i < index.size(); i++){
                int idx = index[i];
                Rect box = boxes[idx];
                int left = box.x;
                int top = box.y;
                int width = box.width;
                int height = box.height;

                rectangle(input_image, Point(left, top), Point(left + width, top + height), BLUE, 3*THICKNESS);

                
                string label = format("%.2f", confidences[idx]);
                label = list_name[class_ids[idx]] + ":" + label;
                if (list_name[class_ids[idx]] == "person"){
                    seen.gate = 1;
                    RCLCPP_INFO(this->get_logger(), "Person detected.");
                }

                cout<<"Gate : "<< seen.gate<<endl;

                draw_label(input_image, label, left, top);

            }

            return input_image;
        }

        void topic_callback(const sensor_msgs::msg::Image &img_msg){
            cv_bridge::CvImagePtr temp_img = cv_bridge::toCvCopy(img_msg);
            Mat frame = temp_img->image;

            if (frame.empty()){
                RCLCPP_INFO(this->get_logger(), "Frame cannot be read.");
                return;
            }

            detections = pre_process(frame, net);

            Mat img = post_process(frame, detections, class_list);

            imshow("Result", img);
            publisher_->publish(seen);
            waitKey(1);

        }

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscriber_;
    rclcpp::Publisher<tugas_yolo_yolocpp::msg::Seen>::SharedPtr publisher_;
    Net net= readNet("tugas_yolo_yolocpp/model/yolov5n.onnx");
    vector<Mat> detections;

    

    int temp = class_list.size();
};

int main(int argc, char const *argv[]) {
    while (getline(ifs, line_)){
        class_list.push_back(line_);
    }
    rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<Detection>());
	rclcpp::shutdown();
	return 0;
}

