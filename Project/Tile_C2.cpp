#include "Tile_C2.h"


std::vector<std::string> Tile_C2::Get_appearance () const {
        return appearance;
    }

bool Tile_C2::Put (const int pos) {
    position = pos;
    Table* table = Table::Get_table();
    if (!table->Update(position, "Tile_C2", appearance))
        return false;
    return true;
}

std::vector<std::string> Tile_C2::appearance = {" _____ ", "|     |", "|     |", "|  _  |", "| /C\\ |", "|/___\\|"};
