cmake_minimum_required(VERSION 3.29)
project(faceTrace)

set(CMAKE_CXX_STANDARD 20)

# Set the OpenCV directory path
set(OpenCV_DIR "C:/Users/BTK/Documents/opencv/build/x64/vc16/lib")

# Find OpenCV
find_package(OpenCV REQUIRED)

# Include OpenCV headers
include_directories(${OpenCV_INCLUDE_DIRS})

# Define the executable
add_executable(faceTrace main.cpp)

# Link OpenCV libraries
target_link_libraries(faceTrace ${OpenCV_LIBS})


include_directories("C:/Users/BTK/Documents/opencv/build/include")
set(OpenCV_DIR "C:/Users/BTK/Documents/opencv/build")

