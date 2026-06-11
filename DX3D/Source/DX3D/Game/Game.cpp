//
// Created by Louis Niango on 11/06/2026.
//

#include "/Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Game/Game.h"
#include </Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Window/Window.h>

DX3D::Game::Game()
{
    m_display = new Window();
}

DX3D::Game::~Game() {
    delete m_display;
}

