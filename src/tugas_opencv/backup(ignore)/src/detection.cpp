#include <iostream>
#include <opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;
using namespace std;


int main(int argc, char** argv){
     VideoCapture camera(0);

     if (!camera.isOpened()){
          cout <<"Camera cannot be opened."<<endl;
          return 0;
     }

     int floorH = 0;
     int ceilingH = 179;

     int floorS = 0;
     int ceilingS = 255;

     int floorV = 0;
     int ceilingV = 255;

     namedWindow("HSV Control", WINDOW_NORMAL);

     createTrackbar("H Floor", "HSV Control", &floorH, 179);
     createTrackbar("H Ceiling", "HSV Control", &ceilingH, 179);

     createTrackbar("S Floor", "HSV Control", &floorS, 255);
     createTrackbar("S Ceiling", "HSV Control", &ceilingS, 255);

     createTrackbar("V Floor", "HSV Control", &floorV, 255);
     createTrackbar("V Ceiling", "HSV Control", &ceilingV, 255);

     

     while (1){
          Mat frame;
          
          if (!camera.read(frame)){
               cout<<"Frame cannot be read."<< endl;
               break;
          }

          Mat frameHSV;
          cvtColor(frame, frameHSV, COLOR_BGR2HSV);
          Mat frameBinary;
          inRange(frameHSV, Scalar(floorH, floorS, floorV), Scalar(ceilingH, ceilingS, ceilingV), frameBinary);

          erode(frameBinary, frameBinary, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
          dilate(frameBinary, frameBinary, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 

          dilate(frameBinary, frameBinary, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) ); 
          erode(frameBinary, frameBinary, getStructuringElement(MORPH_ELLIPSE, Size(5, 5)) );
          
          Moments measure = moments(frameBinary);
          double area = measure.m00;
          double lengthX = measure.m01;
          double lengthY = measure.m10;

          imshow("Original", frame);
          imshow("HSV", frameBinary);

          if (waitKey(30) == 27){
               break;
          }
     }


     return 0;
}