#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "example_programs::Header" for configuration ""
set_property(TARGET example_programs::Header APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(example_programs::Header PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libHeader.so"
  IMPORTED_SONAME_NOCONFIG "libHeader.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS example_programs::Header )
list(APPEND _IMPORT_CHECK_FILES_FOR_example_programs::Header "${_IMPORT_PREFIX}/lib/libHeader.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
