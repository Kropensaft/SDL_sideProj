// headers/Renderer.h

#ifndef RENDERER_H
#define RENDERER_H

#include "Game.h"

class Renderer : public Game {
public:
    Renderer();

    ~Renderer();

    void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen) override;

    void render();

    void clean() override;

private:
    SDL_Renderer * renderer_;
};

#endif // RENDERER_H
