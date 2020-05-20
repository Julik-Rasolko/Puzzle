#include "Printers.h"


void LosePrinter::Print() const{
        std::cout << "..." << std::endl << "You know..." << std::endl
                       << "It's actually imposible. I'm Sorry." << std::endl << "You LOST" << std::endl;
}

void WinPrinter::Print() const{
        std::cout << "I thought it is imposible, but..." << std::endl << "You WON! Congrats!!!";
}