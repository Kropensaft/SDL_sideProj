//
// Created by Kropen on 24.07.2024.
//

#include "./headers/Game.h"

#include "headers/renderer.h"

void Game::RunGame() {
    Renderer renderer = Renderer();
    renderer.init("SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    //TODO Do game stuff here
}
Game::Game() {
    Renderer renderer_;
    renderer_.init("SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);
    renderer_.render();
}

Game::~Game() {
    Renderer renderer_;
    renderer_.clean();
    SDL_Quit();
}