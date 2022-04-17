cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

project(main)
add_executable(main src/main.cpp src/memory/createList.cpp 
                    src/handlers/readInput.cpp src/handlers/insertNode.cpp
                    src/handlers/placeNodeFrontofList.cpp 
                    src/handlers/placeNodeBackofList.cpp
                    src/handlers/findNodePlacement.cpp)