add_library(class2 SHARED class2.cpp)
#add_subdirectory(../class1 ${CMAKE_CURRENT_SOURCE_DIR}/build)
target_include_directories(class2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(class2 PUBLIC class1)
