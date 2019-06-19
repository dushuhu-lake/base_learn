cmake_minimum_required(VERSION 3.10)
project(base_learn)

set(CMAKE_CXX_STANDARD 11)
set(HEADFILE myArray/myArray.h baseCpp/floatInmem.h baseCpp/pointAndreference.h myArray/myArraytest.h)
set(SOURCE main.cpp myArray/myArray.cpp templateTest/templateTest.cpp templateTest/templateTest.h baseCpp/arrayMeth.h algorithmCode/jpegZ.h algorithmCode/bigIntMul.h baseCpp/avoid_dump_delete.h mystring/mystring.cpp mystring/mystring.h mystring/mystringtest.h)
add_executable(base_learn ${SOURCE} ${HEADFILE})
