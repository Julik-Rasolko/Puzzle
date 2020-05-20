#include "Tile_C3.h"


std::vector<std::string> Tile_C3::Get_appearance () const {
        return appearance;
    }

bool Tile_C3::Put (const int pos) {
    position = pos;
    Table* table = Table::Get_table();
    if (!table->Update(position, "Tile_C3", appearance))
        return false;
    return true;
}

std::vector<std::string> Tile_C3::appearance = {" _____ ", "|\\    |", "| \\   |", "|CT|  |", "| /   |", "|/____|"};
