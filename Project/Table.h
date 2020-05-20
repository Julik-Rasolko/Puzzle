#pragma once


#include "Global.h"


class Table{
public:
    ~Table();
    Table(Table& other) = delete;
    void operator=(const Table&) = delete;
    static Table* Get_table();
    bool Update(int position, const std::string& type, const std::vector<std::string>& tile_appearance);
    bool Can_put(const std::string& tile_type);
    void Print();
private:
    Table();
    static Table* table;
    std::vector<std::vector<std::string> > appearance;              /// I HOPE it will be graphic soon
    std::vector<std::map<std::string, int> > options;
    static const int width = 8;
    static const int height = 4;
};