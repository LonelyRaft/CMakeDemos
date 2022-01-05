
# 设置 CMake 的最低版本
cmake_minimum_required(VERSION 3.20)
# 设置语言标准
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED true)
# 设置编译类型 debug or release
set(CMAKE_BUILD_TYPE "Debug")
# 设置生成的项目类型
# set(CMAKE_MAKE_PROGRAM "MinGW Makefiles")
# 设置项目名称
project(Main VERSION 1.0)
# 添加选项
option(DEF_PRINT_MSG "print some message" ON)
if(DEF_PRINT_MSG)
    message(STATUS "start config project Main ${PROJECT_LANGUAGE}")
endif()
# 添加配置文件
configure_file(config.txt config.h)
# 添加可执行目标源文件
add_executable(Main main.c)
# 添加配置文件目录
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
