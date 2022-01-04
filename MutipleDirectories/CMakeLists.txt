# 设置 CMake 的最低版本
cmake_minimum_required(VERSION 3.20)
# 设置项目名称
project(Main VERSION 1.0)
add_subdirectory(Point)
add_subdirectory(Circle)
add_subdirectory(Rect)
# 添加可执行目标源文件
add_executable(${PROJECT_NAME} main.c)
# point 依赖于 sqrt, 需要在这里添加 math 库
target_link_libraries(${PROJECT_NAME} m Point Circle Rect)
