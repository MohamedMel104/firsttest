CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

project(subDirBuild)
#include(class1)
#include(class2)

add_subdirectory(class1)
add_subdirectory(class2)

add_executable(subDirBuildBinary main.cpp)
target_link_libraries(subDirBuildBinary PUBLIC class2)