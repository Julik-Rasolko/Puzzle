#pragma once


#include "Tile.h"


class Tile_C4: public Tile{
public:
    vector<string> Get_appearance () const;
    void Put (const int pos);
protected:
    static vector<string> appearance;
    int position = NULL;
};
