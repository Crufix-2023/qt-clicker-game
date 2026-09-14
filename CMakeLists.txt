cmake_minimum_required(VERSION 3.21)

project(QtProgram LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.11.2 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(QtProgram
    src/main.cpp
    src/mainwindow.h
    src/mainwindow.ui
)

target_link_libraries(QtProgram 
    PRIVATE 
        Qt6::Core
        Qt6::Widgets
)