#include "Tile_C4.h"


std::vector<std::string> Tile_C4::Get_appearance () const {
        return appearance;
    }

void Tile_C4::Put (const int pos) {
        position = pos;
        ///table.Update(position, "Tile_C4");
    }

std::vector<std::string> Tile_C4::appearance = {" _____ ", "|    /|", "|   / |", "|  |CT|", "|   \\ |", "|____\\|"};