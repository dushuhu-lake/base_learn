cmake_minimum_required(VERSION 3.10)
project(base_learn)

set(CMAKE_CXX_STANDARD 11)
set(HEADFILE myArray/myArray.h baseCpp/floatInmem.h baseCpp/pointAndreference.h myArray/myArraytest.h)
set(SOURCE main.cpp myArray/myArray.cpp templateTest/templateTest.cpp templateTest/templateTest.h baseCpp/arrayMeth.h algorithmCode/jpegZ.h algorithmCode/bigIntMul.h baseCpp/avoid_dump_delete.h mystring/mystring.cpp mystring/mystring.h mystring/mystringtest.h baseCpp/virtual_table.h baseCpp/rtti.h baseCpp/vitural_fun_inherit.h baseCpp/virtual_run_time.h baseCpp/assert_debug.h baseCpp/autoptr.h baseCpp/sharedPtr.h algorithmCode/maxSub.h baseCpp/cppThreadMutex.h algorithmCode/subStrss.h baseCpp/strip_string.h baseCpp/roundoutNumWithArr.h algorithmCode/biTreealg.h algorithmCode/sortalgori.h baseCpp/readFile.h algorithmCode/findMax.h algorithmCode/arrayAspram.h)
add_executable(base_learn ${SOURCE} ${HEADFILE})
