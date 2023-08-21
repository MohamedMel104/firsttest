CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)
project(MultipleFileApp
        VERSION 1.0.0
        DESCRIPTION "A test project for using multiple files with CMAKE"
        LANGUAGES CXX)
        #file(GLOB_RECURSE SRC_FILES src/*.cpp)
        #add_executable(MultipleFileAppBinary main.cpp ${SRC_FILES})
        add_library(class1 STATIC src/class1.cpp)
        target_include_directories(class1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

        add_library(class2 STATIC class2/src/class2.cpp)
        target_include_directories(class2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/class2/include)

        add_executable(MultipleFileAppBinary main.cpp
        #src/class1.cpp 
        #src/class2.cpp     
        )
        target_link_libraries(class2 PUBLIC class1)
        #target_compile_features(MultipleFileAppBinary PRIVATE cxx_std_17)
        #target_include_directories(MultipleFileAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

        target_link_libraries(MultipleFileAppBinary PUBLIC class1 class2)
       #include_directories(${CMAKE_SOURCE_DIR}/include)