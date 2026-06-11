//
// Created by Louis Niango on 11/06/2026.
//
#include "/Users/kyo/Documents/projects/game_engine/DX3D/Include/All.h"

int main ()
{
    DX3D::Window window;

    while (!window.shouldClose())
    {
        window.pollEvents();

        // rendering

        window.swapBuffers();
    }

    return 0;
}