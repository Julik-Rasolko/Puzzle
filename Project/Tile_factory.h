#pragma once


#include "Tile_C1.h"
#include "Tile_C2.h"
#include "Tile_C3.h"
#include "Tile_C4.h"


class Tile_factory{
public:
    Tile* Create_tile(string name) const;
};
