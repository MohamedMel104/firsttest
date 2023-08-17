CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
project(MultipleFileApp
        VERSION 1.0.0
        DESCRIPTION "A test project for using multiple files with CMAKE"
        LANGUAGES CXX)
        file(GLOB_RECURSE SRC_FILES src/*.cpp)
        add_executable(MultipleFileAppBinary main.cpp ${SRC_FILES})
        #add_executable(MultipleFileAppBinary main.cpp
        #src/class1.cpp 
        #src/class2.cpp     
        #)
        target_compile_features(MultipleFileAppBinary PRIVATE cxx_std_17)
        target_include_directories(MultipleFileAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
       #include_directories(${CMAKE_SOURCE_DIR}/include)