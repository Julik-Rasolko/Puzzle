#include "Turn.h"


int main()
{
    Table* table = Table::Get_table();
    Tile_factory* factory = new Tile_factory;
    srand(time(NULL));
    for (int i = 0; i < 32; ++i)
        if(!Turn(factory)){
            std::cout << "..." << std::endl << "You know..." << std::endl
                       << "It's actually imposible. I'm Sorry." << std::endl << "You LOST" << std::endl;
            break;
        }
    delete factory;
    delete table;
    return 0;
}
