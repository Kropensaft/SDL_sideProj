//
// Created by Kropen on 24.07.2024.
//

#include "headers/renderer.h"

void Renderer::init(const char * title, int xpos, int ypos, int width, int height, bool fullscreen) {
    int flags = 0; // ?  flags for window creation
    if (fullscreen) // ? check whether fullsreen is enabled
        flags = SDL_WINDOW_FULLSCREEN;

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
        {

        // ? Debug message if SDL is correctly initialized
        std::cout << "Subsystem Initialised!..." << std::endl;

        // ? Create a window using passed on values
        window_ = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

        // ? Debug message based on succesfullness of creating a window
        std::cout << (window_ ? "Window created!" : "Window creation failed!") << std::endl;

        // ? Create a renderer for the window
        renderer_ = SDL_CreateRenderer(window_, -1, 0);

        if (renderer_)
            SDL_SetRenderDrawColor(renderer_, 255, 255, 255, 255) , std::cout << "Renderer created!" << std::endl;

        isRunning = true;
    }
    else isRunning = false;
}

void Renderer::render() {
    SDL_RenderClear(renderer_);
    // ? Render stuff here
    SDL_RenderPresent(renderer_);
}

void Renderer::clean() {
    SDL_DestroyWindow(window_);
    SDL_DestroyRenderer(renderer_);
}