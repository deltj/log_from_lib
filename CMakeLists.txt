cmake_minimum_required(VERSION 3.0.0)

project(log_from_lib)

set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -g")

include_directories(${CMAKE_SOURCE_DIR}/src)

add_library(fakelib
    src/Log.cpp
    src/FakeLibClass.cpp)

add_executable(fakebin
    src/FakeBin.cpp)

target_link_libraries(fakebin
    fakelib
    )
