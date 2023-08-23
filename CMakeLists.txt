cmake_minimum_required(VERSION 3.10)
project(wxSceneViewer)


find_package(Coin REQUIRED)
find_package(SoWx REQUIRED)

add_subdirectory(src)
