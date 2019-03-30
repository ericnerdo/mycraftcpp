#include <string>

class Game {
    public:
    Game();
    ~Game();

    void load_world(std::string name);
    void generate_world(long seed, std::string name);
};