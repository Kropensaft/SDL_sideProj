// src/Game.cpp

#include "include/Game.h"


Game::Game() : isRunning(false), window_(nullptr, SDL_DestroyWindow) {
    std::cout << "Game constructor called" << std::endl;
}

Game::~Game() {
    clean();
    std::cout << "Game destructor called" << std::endl;
}

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen) {
    int flags = fullscreen ? SDL_WINDOW_FULLSCREEN : 0;

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        std::cout << "Subsystem Initialized!..." << std::endl;

        window_.reset(SDL_CreateWindow(title, xpos, ypos, width, height, flags));

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

void Game::render(SDL_Window *window_) {
    // TODO Implement game rendering logic
}

void Game::clean() {
    if (window_) {
        window_.reset();
    }
    SDL_Quit();
    std::cout << "Game cleaned up" << std::endl;
}

bool Game::running() {
    return isRunning;
}

SDL_Window *Game::getWindow() {
    return window_.get();
}
