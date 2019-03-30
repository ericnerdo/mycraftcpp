#include "world.hpp"

World::World(long seed, std::string name) : seed(seed), name(name) {}
World::~World() {}

void World::generate_chunks() {
    for(int i = 0; i < 16; i++) {
        Chunk new_chunk(Biom::FOREST);
        new_chunk.generate_blocks(this->seed);
        chunks.push_back(new_chunk);
    }
}

void World::save_world() { }