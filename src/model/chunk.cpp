#include "chunk.hpp"

Chunk::Chunk(Biom biom) : biom(biom) {}

Chunk::~Chunk() {
    for(Block* block : blocks) {
        delete block;
    }
}

void Chunk::generate_blocks(long seed) {
    for(int i = 0; i < 256; i++) {
        Block* new_block = new DirtBlock(std::tuple<int, int, int>(i, 0, 0));
        blocks.push_back(new_block);
        if(i > 0) {
            new_block->set_neighbour(BlockSide::RIGHT, blocks[i - 1]);
        }
    }
}