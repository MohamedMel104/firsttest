CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
project(helloWorldApp
        VERSION 1.0.0
        DESCRIPTION "First Hello World App That Makes Use of CMAKE"
        LANGUAGES CXX)
        add_executable(helloWorldAppBinary hello.cpp)
        target_compile_features(helloWorldAppBinary PRIVATE cxx_std_17)