cmake_minimum_required(VERSION 3.12)
project(Lab_2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(Lab_2 main.cpp Component.cpp Headers/Component.h GameObject.cpp Headers/GameObject.h GameObjectManager.cpp Headers/GameObjectManager.h InputManager.cpp Headers/InputManager.h FileSystem.cpp Headers/FileSystem.h Object.cpp Headers/Object.h AssetManager.cpp Headers/AssetManager.h RenderSystem.cpp Headers/RenderSystem.h GameEngine.cpp Headers/GameEngine.h Headers/tinyxml2.h tinyxml2.cpp)