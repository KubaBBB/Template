cmake_minimum_required(VERSION 3.5)
project(szablon)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    company.cpp
    company.h
    iterator.h
    main.cpp
    shops.cpp
    shops.h
    test.h
    toys.cpp
    toys.h
    vector.h)

add_executable(szablon ${SOURCE_FILES})