project(wxSceneViewer)

cmake_minimum_required(VERSION 3.10)

find_package(Coin REQUIRED)
find_package(SoWx REQUIRED)

add_subdirectory(src)