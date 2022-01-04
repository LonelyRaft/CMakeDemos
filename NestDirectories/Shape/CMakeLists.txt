
add_subdirectory(Point)
add_library(Shape circle.c rect.c)
target_link_libraries(Shape PUBLIC Point)
target_include_directories(Shape INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

