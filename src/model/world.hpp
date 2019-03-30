#include <vector>
#include <string>

#include "chunk.hpp"

class World {
    private:
    long seed;
    std::string name;
    std::vector<Chunk> chunks;

    public:
    World(long seed, std::string name);
    ~World();

    void generate_chunks();
    void save_world();
};