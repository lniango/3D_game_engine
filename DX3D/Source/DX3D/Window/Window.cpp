//
// Created by Louis Niango on 11/06/2026.
//

#include "/Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Window/Window.h"
#include <stdexcept>


namespace DX3D {
    Window::Window() : Base()
    {
        if (!glfwInit())
            throw std::runtime_error("Failed to initialize GLFW");

        // Optionnal -> recommended for opengl
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

        m_window = glfwCreateWindow(1280, 720, "DX3D Engine", nullptr, nullptr);

        if (!m_window)
        {
            glfwTerminate();
            throw std::runtime_error("Failed to create GLFW window");
        }

        glfwMakeContextCurrent(m_window);
    }


    DX3D::Window::~Window() {
        glfwDestroyWindow(m_window);
        glfwTerminate();
    }

    bool Window::shouldClose() const {
        return glfwWindowShouldClose(m_window);
    }

    void Window::pollEvents() {
        glfwPollEvents();
    }

    void Window::swapBuffers() {
        glfwSwapBuffers(m_window);
    }
}