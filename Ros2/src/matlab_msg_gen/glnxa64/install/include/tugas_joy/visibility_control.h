#ifndef TUGAS_JOY__VISIBILITY_CONTROL_H_
#define TUGAS_JOY__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define TUGAS_JOY_EXPORT __attribute__ ((dllexport))
    #define TUGAS_JOY_IMPORT __attribute__ ((dllimport))
  #else
    #define TUGAS_JOY_EXPORT __declspec(dllexport)
    #define TUGAS_JOY_IMPORT __declspec(dllimport)
  #endif
  #ifdef TUGAS_JOY_BUILDING_LIBRARY
    #define TUGAS_JOY_PUBLIC TUGAS_JOY_EXPORT
  #else
    #define TUGAS_JOY_PUBLIC TUGAS_JOY_IMPORT
  #endif
  #define TUGAS_JOY_PUBLIC_TYPE TUGAS_JOY_PUBLIC
  #define TUGAS_JOY_LOCAL
#else
  #define TUGAS_JOY_EXPORT __attribute__ ((visibility("default")))
  #define TUGAS_JOY_IMPORT
  #if __GNUC__ >= 4
    #define TUGAS_JOY_PUBLIC __attribute__ ((visibility("default")))
    #define TUGAS_JOY_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define TUGAS_JOY_PUBLIC
    #define TUGAS_JOY_LOCAL
  #endif
  #define TUGAS_JOY_PUBLIC_TYPE
#endif
#endif  // TUGAS_JOY__VISIBILITY_CONTROL_H_
// Generated 01-Mar-2024 21:41:20
 