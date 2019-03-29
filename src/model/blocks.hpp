#include <tuple>
#include <map>

enum BlockSide {
    TOP,
    BOTTOM,
    LEFT,
    RIGHT,
    FRONT,
    BACK
};

class Block {
    private:
    std::tuple<int, int, int> position;
    std::map<BlockSide, Block*> neighbours;

    int brightness;

    public:
    Block(std::tuple<int, int, int> position);
    virtual ~Block();

    Block* get_neighbour(BlockSide block_side);
    void set_neighbour(BlockSide block_side, Block* neighbouring_block);

};

class DirtBlock : public Block {
    public:
    DirtBlock(std::tuple<int, int, int> position);
    ~DirtBlock();
};
