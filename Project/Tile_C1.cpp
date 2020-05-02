#include "Tile_C1.h"


std::vector<std::string> Tile_C1::Get_appearance () const {
        return appearance;
    }

bool Tile_C1::Put (const int pos) {
    position = pos;
    Table* table = Table::Get_table();
    if (!table->Update(position, "Tile_C1", appearance))
        return false;
    return true;
}

std::vector<std::string> Tile_C1::appearance = {" _____ ", "|\\CT /|", "| \\_/ |", "|     |", "|     |", "|_____|"};
