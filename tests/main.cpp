#include "../src/model/chunk.hpp"

int main(int argc, char const *argv[])
{
    Chunk chunk(Biom::FOREST);
    chunk.generate_blocks(0);
    return 0;
}
