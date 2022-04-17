cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

project(main)
add_executable(main src/main.cpp src/createList.cpp src/readInput.cpp
                    src/placeNodeFrontofList.cpp src/placeNodeBackofList.cpp
                    src/insertNode.cpp)