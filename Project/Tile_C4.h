#pragma once


#include "Tile.h"


class Tile_C4: public Tile{
public:
    std::vector<std::string> Get_appearance () const;
    bool Put (const int pos);
protected:
    static std::vector<std::string> appearance;
    int position = NULL;
};
