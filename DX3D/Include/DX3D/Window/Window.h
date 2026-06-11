//
// Created by Louis Niango on 11/06/2026.
//

#ifndef GAME_ENGINE_WINDOW_H
#define GAME_ENGINE_WINDOW_H

#include </Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Core/Base.h>
#include <GLFW/glfw3.h>

namespace DX3D {
    class Window : public Base
    {
        public:
            Window();
            ~Window() override;

            bool shouldClose() const;
            void pollEvents();
            void swapBuffers();

        private:
            //void* m_handle;
            GLFWwindow* m_window = nullptr;
    };

}



#endif //GAME_ENGINE_WINDOW_H
