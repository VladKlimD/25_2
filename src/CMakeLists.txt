cmake_minimum_required(VERSION 3.23)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(25_2 main.cpp cpu.cpp disk.cpp gpu.cpp kbd.cpp ram.cpp
        ${MY_INCLUDE_DIR}/cpu.h ${MY_INCLUDE_DIR}/ram.h ${MY_INCLUDE_DIR}/disk.h
        ${MY_INCLUDE_DIR}/gpu.h ${MY_INCLUDE_DIR}/kbd.h)
target_include_directories(25_2 PUBLIC ${MY_INCLUDE_DIR})