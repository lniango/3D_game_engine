//
// Created by Louis Niango on 11/06/2026.
//
#include </Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Core/Base.h>
#include </Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Core/Core.h>
#include </Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Window/Window.h>

#ifndef GAME_ENGINE_GAME_H
#define GAME_ENGINE_GAME_H

namespace DX3D {
    class Game : public Base
    {
    public:
        Game();
        ~Game() override;

        virtual void run() final;

    private:
        Window* m_display{};
        bool m_isRunning { true };
    };
}


#endif //GAME_ENGINE_GAME_H
