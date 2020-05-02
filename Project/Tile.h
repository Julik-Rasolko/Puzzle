#pragma once


#include "Global.h"
#include "Table.h"


class Tile{
public:
    virtual std::vector<std::string> Get_appearance () const = 0;
    virtual bool Put (const int pos) = 0;
protected:
    static std::vector<std::string> appearance;
    int position = NULL;
} ;
