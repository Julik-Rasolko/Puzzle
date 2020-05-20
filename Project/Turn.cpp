#include "Turn.h"


bool Turn(Tile_factory* factory){
    Table* table = Table::Get_table();
    table->Print();
    std::string tile_type = factory->Catalogue()[rand()%factory->Catalogue_size()];
    Tile* tile = factory->Create_tile(tile_type);
    std::cout << std::endl << "You need to put: " << std::endl;
    for (int i = 0; i < 6; ++i)
        std::cout << tile->Get_appearance()[i] << std::endl;
    if (!table->Can_put(tile_type))
        return false;
    int pos;
    std::cout << "Please choose a place. Its number: ";
        std::cin >> pos;
    while (!tile->Put(pos)){
        std::cout << "You can't put this tile here. Please choose another place. Its number: ";
        std::cin >> pos;
    }
    delete tile;
    return true;
}
