#include "Tile_C2.h"


std::vector<std::string> Tile_C2::Get_appearance () const {
        return appearance;
    }

void Tile_C2::Put (const int pos) {
        position = pos;
        ///table.Update(position, "Tile_C2");
    }

std::vector<std::string> Tile_C2::appearance = {" _____ ", "|     |", "|     |", "|  _  |", "| /C\\ |", "|/___\\|"};
