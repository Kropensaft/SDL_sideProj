
#include "headers/Game.h"
#include "headers/renderer.h"

int main() {


        //Game Loop

        //Call input handler

        //Call update function

        //Call render function
        Renderer * renderer = new Renderer();
        renderer->init("Game Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
        while (renderer->running()) {
            renderer->handleEvents();
            renderer->update();
            renderer->render();
        }

        renderer->clean();
        delete renderer;
        return 0;
}
