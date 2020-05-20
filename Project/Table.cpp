#include "Table.h"


Table* Table::table = NULL;

Table::Table(){
    for (int i = 0; i < 9; ++i){
        options.push_back({{"Tile_C1",1},{"Tile_C2",1},{"Tile_C3",1},{"Tile_C4",1}});
        appearance.push_back({" _____ ","|     |","|     |","|  " + std::to_string(i+1) + "  |","|     |","|_____|"});
    }
    for (int i = 9; i < width*height; ++i){
        options.push_back({{"Tile_C1",1},{"Tile_C2",1},{"Tile_C3",1},{"Tile_C4",1}});
        appearance.push_back({" _____ ","|     |","|     |","|  " + std::to_string(i+1) + " |","|     |","|_____|"});
    }
}

Table::~Table(){
    table = NULL;
    options.clear();
    appearance.clear();
}

Table* Table::Get_table(){
    if (table == NULL)
        table = new Table;
    return table;
}

bool Table::Update(int position, const std::string& type, const std::vector<std::string>& tile_appearance){ 
    if (options[position -1][type] == 0)
        return false;
    appearance[position-1] = tile_appearance;
    options[position-1]["Tile_C1"] = 0;
    options[position-1]["Tile_C2"] = 0;
    options[position-1]["Tile_C3"] = 0;
    options[position-1]["Tile_C4"] = 0;
    if (type == "Tile_C1"){
        if (position > width){
            options[position - 1 - width]["Tile_C1"] = 0;
            options[position - 1 - width]["Tile_C3"] = 0;
            options[position - 1 - width]["Tile_C4"] = 0;
        }
        if (position <= width*(height-1))
            options[position - 1 + width]["Tile_C1"] = 0;
        if (position%width != 1)
            options[position - 2]["Tile_C4"] = 0;
        if (position%width != 0)
            options[position]["Tile_C3"] = 0;
    }
    else if (type == "Tile_C2"){
        if (position > width)
            options[position - 1 - width]["Tile_C2"] = 0;
        if (position <= width*(height-1)){
            options[position - 1 + width]["Tile_C2"] = 0;
            options[position - 1 + width]["Tile_C3"] = 0;
            options[position - 1 + width]["Tile_C4"] = 0;
        }
        if (position%width != 1)
            options[position - 2]["Tile_C4"] = 0;
        if (position%width != 0)
            options[position]["Tile_C3"] = 0;
    }
    else if (type == "Tile_C3"){
        if (position > width)
            options[position - 1 - width]["Tile_C2"] = 0;
        if (position <= width*(height-1))
            options[position - 1 + width]["Tile_C1"] = 0;
        if (position%width != 1){
            options[position - 2]["Tile_C1"] = 0;
            options[position - 2]["Tile_C2"] = 0;
            options[position - 2]["Tile_C3"] = 0;
        }
        if (position%width != 0)
            options[position]["Tile_C3"] = 0;
    }
    else{
        if (position > width)
            options[position - 1 - width]["Tile_C2"] = 0;
        if (position <= width*(height-1))
            options[position - 1 + width]["Tile_C1"] = 0;
        if (position%width != 1)
            options[position - 2]["Tile_C4"] = 0;
        if (position%width != 0){
            options[position]["Tile_C1"] = 0;
            options[position]["Tile_C2"] = 0;
            options[position]["Tile_C4"] = 0;
        }
    }
    return true;
}

bool Table::Can_put(const std::string& tile_type){
    for (int i = 0; i < width*height; ++i)
        if (options[i][tile_type] == 1)
            return true;
    return false;
}

void Table::Print(){
    for (int line = 0; line < height; ++line)
        for (int str = 0; str < 6; ++str){
            for (int colomn = 0; colomn < width; ++colomn)
                std::cout << appearance[colomn+width*line][str];
            std::cout << std::endl;
        }
}