#include "../src/model/blocks.hpp"

int main(int argc, char const *argv[])
{
    Block* block = new DirtBlock(std::tuple<int, int, int>(1,1,1));
    delete block;
    return 0;
}
