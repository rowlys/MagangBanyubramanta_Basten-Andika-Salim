#ifndef TUGAS_YOLO_YOLOCPP__VISIBILITY_CONTROL_H_
#define TUGAS_YOLO_YOLOCPP__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TUGAS_YOLO_YOLOCPP_EXPORT __attribute__ ((dllexport))
    #define TUGAS_YOLO_YOLOCPP_IMPORT __attribute__ ((dllimport))
  #else
    #define TUGAS_YOLO_YOLOCPP_EXPORT __declspec(dllexport)
    #define TUGAS_YOLO_YOLOCPP_IMPORT __declspec(dllimport)
  #endif
  #ifdef TUGAS_YOLO_YOLOCPP_BUILDING_LIBRARY
    #define TUGAS_YOLO_YOLOCPP_PUBLIC TUGAS_YOLO_YOLOCPP_EXPORT
  #else
    #define TUGAS_YOLO_YOLOCPP_PUBLIC TUGAS_YOLO_YOLOCPP_IMPORT
  #endif
  #define TUGAS_YOLO_YOLOCPP_PUBLIC_TYPE TUGAS_YOLO_YOLOCPP_PUBLIC
  #define TUGAS_YOLO_YOLOCPP_LOCAL
#else
  #define TUGAS_YOLO_YOLOCPP_EXPORT __attribute__ ((visibility("default")))
  #define TUGAS_YOLO_YOLOCPP_IMPORT
  #if __GNUC__ >= 4
    #define TUGAS_YOLO_YOLOCPP_PUBLIC __attribute__ ((visibility("default")))
    #define TUGAS_YOLO_YOLOCPP_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TUGAS_YOLO_YOLOCPP_PUBLIC
    #define TUGAS_YOLO_YOLOCPP_LOCAL
  #endif
  #define TUGAS_YOLO_YOLOCPP_PUBLIC_TYPE
#endif
#endif  // TUGAS_YOLO_YOLOCPP__VISIBILITY_CONTROL_H_
// Generated 29-Feb-2024 19:07:36
 