#ifndef TUGAS_OPENCV__VISIBILITY_CONTROL_H_
#define TUGAS_OPENCV__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TUGAS_OPENCV_EXPORT __attribute__ ((dllexport))
    #define TUGAS_OPENCV_IMPORT __attribute__ ((dllimport))
  #else
    #define TUGAS_OPENCV_EXPORT __declspec(dllexport)
    #define TUGAS_OPENCV_IMPORT __declspec(dllimport)
  #endif
  #ifdef TUGAS_OPENCV_BUILDING_LIBRARY
    #define TUGAS_OPENCV_PUBLIC TUGAS_OPENCV_EXPORT
  #else
    #define TUGAS_OPENCV_PUBLIC TUGAS_OPENCV_IMPORT
  #endif
  #define TUGAS_OPENCV_PUBLIC_TYPE TUGAS_OPENCV_PUBLIC
  #define TUGAS_OPENCV_LOCAL
#else
  #define TUGAS_OPENCV_EXPORT __attribute__ ((visibility("default")))
  #define TUGAS_OPENCV_IMPORT
  #if __GNUC__ >= 4
    #define TUGAS_OPENCV_PUBLIC __attribute__ ((visibility("default")))
    #define TUGAS_OPENCV_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TUGAS_OPENCV_PUBLIC
    #define TUGAS_OPENCV_LOCAL
  #endif
  #define TUGAS_OPENCV_PUBLIC_TYPE
#endif
#endif  // TUGAS_OPENCV__VISIBILITY_CONTROL_H_
// Generated 19-Feb-2024 13:07:01
 