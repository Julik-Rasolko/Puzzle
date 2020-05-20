#include "Tile_factory.h"


Tile* Tile_factory::Create_tile(const std::string& name) const{
    if (name == "Tile_C1")
        return new Tile_C1();
    else if (name == "Tile_C2")
        return new Tile_C2();
    else if (name == "Tile_C3")
        return new Tile_C3();
    else
        return new Tile_C4();
}

const int Tile_factory::Catalogue_size() const{
    return Num_of_tile_types;
}

const std::vector<std::string>& Tile_factory::Catalogue() const{
    return Tile_types;
}
