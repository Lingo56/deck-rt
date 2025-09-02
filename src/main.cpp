#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <imgui.h>
#include <imgui_backends/imgui_impl_vulkan.h>
#include <imgui_backends/imgui_impl_glfw.h>
#include <iostream>

int main() {
    // 1. Initialize GLFW
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* window = glfwCreateWindow(1280, 720, "Vulkan ImGui App", nullptr, nullptr);

    // 2. Create Vulkan instance, device, swapchain, etc.
    //    (Use Vulkan SDK samples or helper libraries for this step)

    // 3. Setup ImGui context
    //IMGUI_CHECKVERSION();
    //ImGui::CreateContext();
    //ImGuiIO& io = ImGui::GetIO();

    // 4. Setup ImGui backends
    //ImGui_ImplGlfw_InitForVulkan(window, true);
    //ImGui_ImplVulkan_Init(/* Vulkan init info */);

    // 5. Main loop
    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        //ImGui_ImplVulkan_NewFrame();
        //ImGui_ImplGlfw_NewFrame();
        //ImGui::NewFrame();

        // Your ImGui UI code here
        //ImGui::ShowDemoWindow();

        //ImGui::Render();
        // Record Vulkan commands to render ImGui
        // Present frame
    }

    // 6. Cleanup
    //ImGui_ImplVulkan_Shutdown();
    //ImGui_ImplGlfw_Shutdown();
    //ImGui::DestroyContext();
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}