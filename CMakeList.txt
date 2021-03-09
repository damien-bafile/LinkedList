cmake_minimum_required(VERSION 3.7)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project("linkedList")
if (MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_executable("${PROJECT_NAME}" main.cpp Student.cpp LinkedList.cpp) 
