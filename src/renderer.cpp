// src/Renderer.cpp

#include "../include/renderer.h"

// ? Constructor for the Renderer class
Renderer::Renderer() : renderer_(nullptr) {
    std::cout << "Renderer constructor called" << std::endl;
}

// ? Destructor for the Renderer class
Renderer::~Renderer() {
    clean(); // ? Clean up resources
    std::cout << "Renderer destructor called" << std::endl;
}

// ? Initialize the renderer
void Renderer::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen) {
    Game::init(title, xpos, ypos, width, height, fullscreen); // ? Call base class init

    // ? Check if the window was created successfully
    if (window_) {
        renderer_ = SDL_CreateRenderer(window_.get(), -1, 0); // ? Create a renderer for the window
        if (renderer_) {
            SDL_SetRenderDrawColor(renderer_, 255, 255, 255, 255); // ? Set the draw color to white
            std::cout << "Renderer created!" << std::endl;
        } else {
            std::cout << "Renderer creation failed!" << std::endl; // ! Renderer creation failed
        }
    }
}

// ? Render the content
void Renderer::render() {
    SDL_RenderClear(renderer_); // Clear the renderer

    // Example rendering code
    SDL_SetRenderDrawColor(renderer_, 0, 0, 255, 255); // Blue color
    SDL_RenderPresent(renderer_); // Present the rendered content
}

// ? Clean up the renderer and the window
void Renderer::clean() {
    // ? Destroy the renderer if it exists
    if (renderer_) {
        SDL_DestroyRenderer(renderer_);
        renderer_ = nullptr;
    }
    Game::clean(); // ? Call base class clean
    // ! Dont call destructor explicitly
}


