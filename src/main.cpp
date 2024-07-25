
#include "include/Game.h"
#include "include/renderer.h"

int main() {
    //Game Loop

    //Call input handler

    //Call update function

    //Call render function
    auto *renderer = new Renderer();

    //  ? Title = small text atop the window, x,ypos = position of the window relative to the screen
    // ? width, height = width and height of the window, fullscreen = whether the window should be fullscreen
    // ! Dont set the window to fullscreen without properly setting up an escape sequence
    renderer->init("Game Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    SDL_Event event;
    while (renderer->running()) {
        while (SDL_PollEvent(&event))
            if (event.type == SDL_QUIT)
                //Exit the game loop
            renderer->handleEvents();
        renderer->update();
        renderer->render();
    }

    renderer->clean();

    delete renderer;
    return 0;
}
