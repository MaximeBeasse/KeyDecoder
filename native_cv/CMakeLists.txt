cmake_minimum_required(VERSION 3.4.1)

include_directories(${OpenCV_DIR}/jni/include) #Path from gradle to OpenCV Cmake
add_library( lib_opencv SHARED IMPORTED )
set_target_properties(lib_opencv PROPERTIES IMPORTED_LOCATION ${OpenCV_DIR}/libs/${ANDROID_ABI}/libopencv_java4.so)

find_library(log-lib log)

add_library(native_cv

        SHARED

        ./core_cv.cpp
        )

target_link_libraries(native_cv

        lib_opencv

        ${log-lib}

        )