// headers/Game.h

#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <iostream>

class Game {
public:
    Game();
    virtual ~Game();

    virtual void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    virtual void handleEvents();
    virtual void update();
    virtual void render();
    virtual void clean();

    bool running() const { return isRunning; }

protected:
    bool isRunning;
    SDL_Window* window_;
};

#endif // GAME_H
