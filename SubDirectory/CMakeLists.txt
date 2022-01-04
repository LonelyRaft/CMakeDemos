# 设置 CMake 的最低版本
cmake_minimum_required(VERSION 3.20)
# 设置 SRC_LISTS 为源文件列表
set(SRC_LISTS 
    main.c
    Point/point.c)
# 设置项目名称
project(Main VERSION 1.0)
# 添加可执行目标源文件
add_executable(${PROJECT_NAME} ${SRC_LISTS})
# point 依赖于 sqrt, 需要在这里添加 math 库
target_link_libraries(${PROJECT_NAME} m)
# 添加头文件包含路径
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/Point")
