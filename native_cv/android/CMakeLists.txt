cmake_minimum_required(VERSION 3.6.0)
include_directories(../include)
add_library(lib_opencv SHARED IMPORTED)
set_target_properties(lib_opencv PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI}/libopencv_java4.so)
set(SRC_DIR "../ios/Classes")
set(SOURCES
    ${SRC_DIR}/core_cv.cpp
)
add_library(native_cv SHARED ${SOURCES})
target_link_libraries(native_cv lib_opencv)