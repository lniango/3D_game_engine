//
// Created by Louis Niango on 11/06/2026.
//

#ifndef GAME_ENGINE_WINDOW_H
#define GAME_ENGINE_WINDOW_H

#include </Users/kyo/Documents/projects/game_engine/DX3D/Include/DX3D/Core/Base.h>


namespace DX3D {
    class Window : public Base
    {
        public:
            Window();
            virtual ~Window();

        private:
            void* m_handle;
    };

}



#endif //GAME_ENGINE_WINDOW_H
