//
// Created by Louis Niango on 11/06/2026.
//

#include "Win32Game.h"
#include <windows.h>
#include </Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Game/Game.h>

void DX3D::Game::run() {
    MSG msg{};
    //Game loop
    while (m_isRunning) {
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
        Sleep(1);
    }
}