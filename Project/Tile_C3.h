#pragma once


#include "Tile.h"


class Tile_C3: public Tile{
public:
    std::vector<std::string> Get_appearance () const;
    void Put (const int pos);
protected:
    static std::vector<std::string> appearance;
    int position = NULL;
};
