#pragma once


#include "Tile_C1.h"
#include "Tile_C2.h"
#include "Tile_C3.h"
#include "Tile_C4.h"


class Tile_factory{
public:
    Tile* Create_tile(const std::string& name) const;
    const int Catalogue_size() const;
    const std::vector<std::string>& Catalogue() const;
private:
    const int Num_of_tile_types = 4;
    const std::vector<std::string> Tile_types = {"Tile_C1", "Tile_C2", "Tile_C3", "Tile_C4"};
};
