#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tugas_opencv::tugas_opencv__rosidl_typesupport_introspection_cpp" for configuration "Release"
set_property(TARGET tugas_opencv::tugas_opencv__rosidl_typesupport_introspection_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tugas_opencv::tugas_opencv__rosidl_typesupport_introspection_cpp PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtugas_opencv__rosidl_typesupport_introspection_cpp.so"
  IMPORTED_SONAME_RELEASE "libtugas_opencv__rosidl_typesupport_introspection_cpp.so"
  )

list(APPEND _cmake_import_check_targets tugas_opencv::tugas_opencv__rosidl_typesupport_introspection_cpp )
list(APPEND _cmake_import_check_files_for_tugas_opencv::tugas_opencv__rosidl_typesupport_introspection_cpp "${_IMPORT_PREFIX}/lib/libtugas_opencv__rosidl_typesupport_introspection_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)