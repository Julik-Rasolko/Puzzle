#include "Turn.h"


bool Turn(){
    Tile_factory* factory = new Tile_factory;
    Tile* tile = factory->Create_tile(factory->Catalogue()[rand()%factory->Catalogue_size()]);
    std::cout << "You need to put: " << std::endl;
    for (int i = 0; i < 6; ++i)
        std::cout << tile->Get_appearance()[i] << std::endl;
    int pos;
    std::cout << "Please choose a place. Its number (now any number you with) : ";
    std::cin >> pos;
    tile->Put(pos);
    delete factory;
    delete tile;
    return true;
}
