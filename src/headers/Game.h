//
// Created by Kropen on 24.07.2024.
//

#ifndef GAME_H
#define GAME_H
#include "sdl2/SDL.h"
#include <iostream>

class Game {
protected:
    bool isRunning;
    SDL_Window * window_;
public:
    bool running() { return isRunning; }
    void RunGame();
    Game();
    ~Game();
};
#endif //GAME_H
