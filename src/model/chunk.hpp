#include <vector>

#include "blocks.hpp"

enum Biom {
    ARCTIC,
    DESERT,
    FOREST
};

class Chunk {
    private:
    Biom biom;
    std::vector<Block*> blocks;

    public:
    Chunk(Biom biom);
    ~Chunk();

    void generate_blocks(long seed);
};