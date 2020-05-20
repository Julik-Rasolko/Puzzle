#include "GameInterface.h"


int main()
{
    GameInterface* game = new GameInterface(new Tile_factory(), new WinPrinter());
    Table* table = Table::Get_table();
    table->Print();
    srand(time(NULL));
    for (int i = 0; i < 32; ++i)
        if(!game->turn()){
            game->set_printer(new LosePrinter());
            break;
        }
    game->end_game();
    delete table;
    delete game;
    return 0;
}
