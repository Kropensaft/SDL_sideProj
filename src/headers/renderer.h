//
// Created by Kropen on 24.07.2024.
//

#ifndef RENDERER_H
#define RENDERER_H
#include "Game.h"

class Renderer : public Game {
private:
    SDL_Renderer * renderer_;
public:
    void init(const char * title, int xpos, int ypos, int width, int height, bool fullscreen);
    void render();
    void clean();

};
#endif //RENDERER_H
