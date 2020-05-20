#pragma once


#include "Global.h"


struct Printer{
    virtual void Print() const = 0;
};

struct LosePrinter: public Printer{
    void Print() const;
};

struct WinPrinter: public Printer{
    void Print() const;
};