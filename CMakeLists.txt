cmake_minimum_required(VERSION 3.15)
cmake_policy(SET CMP0091 NEW)

project(deck_rt_vulkan)
include("${CMAKE_BINARY_DIR}/generators/conan_toolchain.cmake")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_BINARY_DIR}/generators")

find_package(VulkanHeaders REQUIRED)
find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)
find_package(imgui REQUIRED)

add_executable(deck_rt
    src/main.cpp
    src/imgui_backends/imgui_impl_vulkan.cpp
    src/imgui_backends/imgui_impl_glfw.cpp
   )

target_link_libraries(deck_rt PRIVATE vulkan-headers::vulkan-headers glfw imgui::imgui)
target_link_libraries(deck_rt PRIVATE Vulkan::Vulkan)
target_include_directories(deck_rt PRIVATE ${CMAKE_SOURCE_DIR}/src)