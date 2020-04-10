#include "Tile_C1.h"


vector<string> Tile_C1::Get_appearance () const {
        return appearance;
    }

void Tile_C1::Put (const int pos) {
        position = pos;
        ///table.Update(position, "Tile_C1");
    }

vector<string> Tile_C1::appearance = {" _____ ", "|\\CT /|", "| \\_/ |", "|     |", "|     |", "|_____|"};
