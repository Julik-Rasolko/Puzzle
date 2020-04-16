#pragma once


#include "Global.h"


class Tile{
public:
    virtual std::vector<std::string> Get_appearance () const = 0;
    virtual void Put (const int position) = 0;
protected:
    static std::vector<std::string> appearance;
    int position = NULL;
} ;
