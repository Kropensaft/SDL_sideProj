// src/Game.cpp

#include "headers/Game.h"

Game::Game() : isRunning(false), window_(NULL) {
    std::cout << "Game constructor called" << std::endl;
}

Game::~Game() {
    clean();
    std::cout << "Game destructor called" << std::endl;
}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen) {
    int flags = fullscreen ? SDL_WINDOW_FULLSCREEN : 0;

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "Subsystem Initialized!..." << std::endl;

        window_ = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

        if (window_) {
            std::cout << "Window created!" << std::endl;
        } else {
            std::cout << "Window creation failed!" << std::endl; // ! Window creation failed
        }

        isRunning = true;
    } else {
        isRunning = false;
        std::cout << "SDL Initialization failed!" << std::endl; // ! SDL initialization failed
    }
}

void Game::handleEvents() {
    // TODO Implement event handling
}

void Game::update() {
    // TODO Implement game update logic
}

void Game::render() {
    // TODO Implement game rendering logic
}

void Game::clean() {
    if (window_) {
        SDL_DestroyWindow(window_);
        window_ = NULL;
    }
    SDL_Quit();
    std::cout << "Game cleaned up" << std::endl;
}
