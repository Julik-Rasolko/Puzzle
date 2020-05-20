#include "Tile_C4.h"


std::vector<std::string> Tile_C4::Get_appearance () const {
        return appearance;
    }

bool Tile_C4::Put (const int pos) {
    position = pos;
    Table* table = Table::Get_table();
    if (!table->Update(position, "Tile_C4", appearance))
        return false;
    return true;
}

std::vector<std::string> Tile_C4::appearance = {" _____ ", "|    /|", "|   / |", "|  |CT|", "|   \\ |", "|____\\|"};
