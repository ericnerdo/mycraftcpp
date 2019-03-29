#include "blocks.hpp"

Block::Block(std::tuple<int, int, int> position) : position(position) {}
Block::~Block() {}


Block* Block::get_neighbour(BlockSide block_side) {
    return neighbours[block_side];
}

void Block::set_neighbour(BlockSide block_side, Block* neighbouring_block) {
    neighbours[block_side] = neighbouring_block;
}

DirtBlock::DirtBlock(std::tuple<int, int, int> position) : Block(position) {}
DirtBlock::~DirtBlock() {}
