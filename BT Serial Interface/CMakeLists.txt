cmake_minimum_required(VERSION 4.0)
project(BT_Serial_Interface)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_BUILD_TYPE Debug)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(BT_Serial_Interface main.cpp
        serial_comms.cpp
        serial_comms.h
        mainwindow.ui
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui

)
target_link_libraries(BT_Serial_Interface
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
)
