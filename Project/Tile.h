#pragma once


#include "Global.h"


class Tile{
public:
    virtual vector<string> Get_appearance () const = 0;
    virtual void Put (const int position) = 0;
protected:
    static vector<string> appearance;
    int position = NULL;
} ;
