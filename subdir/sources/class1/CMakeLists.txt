add_library(class1 SHARED class1.cpp)
target_include_directories(class1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)