#include "Tile_C3.h"


std::vector<std::string> Tile_C3::Get_appearance () const {
        return appearance;
    }

void Tile_C3::Put (const int pos) {
        position = pos;
        ///table.Update(position, "Tile_C3");
    }

std::vector<std::string> Tile_C3::appearance = {" _____ ", "|\\    |", "| \\   |", "|CT|  |", "| /   |", "|/____|"};
