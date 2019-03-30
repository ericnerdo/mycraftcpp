#include "../src/model/world.hpp"

int main(int argc, char const *argv[])
{
    World world(0, "World");
    world.generate_chunks();
    return 0;
}
