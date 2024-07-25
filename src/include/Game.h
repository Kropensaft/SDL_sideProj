// headers/Game.h

#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include <memory>
#include <iostream>
#include "SDL2/SDL.h"

class Game {
public:
    Game();

    virtual ~Game();

    virtual void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);

    virtual void handleEvents();

    virtual void update();

    virtual void render(SDL_Window *window_);

    virtual void clean();

    virtual SDL_Window *getWindow();

    bool running();

protected:
    bool isRunning;
    std::unique_ptr<SDL_Window, void(*)(SDL_Window *)> window_;
};

#endif // GAME_H
