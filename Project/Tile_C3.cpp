#include "Tile_C3.h"


vector<string> Tile_C3::Get_appearance () const {
        return appearance;
    }

void Tile_C3::Put (const int pos) {
        position = pos;
        ///table.Update(position, "Tile_C3");
    }

vector<string> Tile_C3::appearance = {" _____ ", "|\\    |", "| \\   |", "|CT|  |", "| /   |", "|/____|"};
