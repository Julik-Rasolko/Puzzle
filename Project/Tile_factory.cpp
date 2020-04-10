#include "Tile_factory.h"


Tile* Tile_factory::Create_tile(const string name) const{
        std::cout << "name: " << name << std::endl;
        if (name == "Tile_C1")
            return new Tile_C1();
        else if (name == "Tile_C2")
            return new Tile_C2();
        else if (name == "Tile_C3")
            return new Tile_C3();
        else
            return new Tile_C4();
}
