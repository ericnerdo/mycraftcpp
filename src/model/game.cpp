#include "game.hpp"
#include "world.hpp"

Game::Game() {}
Game::~Game() {}

void Game::load_world(std::string name) {}

void Game::generate_world(long seed, std::string name) {
    World new_world(seed, name);
    new_world.generate_chunks();
    new_world.save_world();
}