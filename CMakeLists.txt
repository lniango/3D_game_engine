cmake_minimum_required(VERSION 4.2)
project(game_engine)

set(CMAKE_CXX_STANDARD 20)

add_executable(game_engine
        Game/main.cpp
        DX3D/Source/DX3D/Core/Base.cpp
        DX3D/Include/DX3D/Core/Base.h
        DX3D/Source/DX3D/Core/Window/Window.cpp
        DX3D/Include/DX3D/Core/Window/Window.h)
