add_executable(wxSceneViewer main.cpp Gui.cpp wxSceneViewer.cpp)

target_link_libraries(wxSceneViewer SoWx::SoWx)