cmake_minimum_required(VERSION 3.20)
project(Main VERSION 1.0 
                    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_BUILD_TYPE "Debug")

# set(CMAKE_PREFIX_PATH "/usr/")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)



find_package(Qt5 COMPONENTS Widgets REQUIRED)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
