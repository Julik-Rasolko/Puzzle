#pragma once


#include "Tile_factory.h"
#include "Printers.h"


class GameInterface{
public:
    GameInterface(Tile_factory* factory, Printer* printer): factory(factory), printer(printer) {}
    ~GameInterface();
    bool turn();
    void set_printer(Printer* printer);
    void end_game() const;
private:
    Tile_factory* factory;
    Printer* printer;
};