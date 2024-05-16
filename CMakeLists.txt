cmake_minimum_required(VERSION 3.10)

project(vinner-it)

find_package(fmt CONFIG REQUIRED)

add_executable(vinner-it vinner-it/HelloWorld.cpp)

target_link_libraries(vinner-it PRIVATE fmt::fmt)
