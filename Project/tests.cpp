#include "gtest/gtest.h"
#include "Turn.h"

TEST(test1, testing_Tile_C1){
    Tile_factory* factory = new Tile_factory;
    Tile* tile = factory->Create_tile("Tile_C1");
    std::string str = tile->Get_appearance()[1];
    EXPECT_TRUE(str == "|\\CT /|");
    delete tile;
    delete factory;
}

TEST(test2, testing_Tile_C2){
    Tile_factory* factory = new Tile_factory;
    Tile* tile = factory->Create_tile("Tile_C2");
    std::string str = tile->Get_appearance()[4];
    EXPECT_TRUE(str == "| /C\\ |");
    delete tile;
    delete factory;
}

TEST(test3, testing_Tile_C3){
    Tile_factory* factory = new Tile_factory;
    Tile* tile = factory->Create_tile("Tile_C3");
    std::string str = tile->Get_appearance()[3];
    EXPECT_TRUE(str == "|CT|  |");
    delete tile;
    delete factory;
}

TEST(test4, testing_Tile_C4){
    Tile_factory* factory = new Tile_factory;
    Tile* tile = factory->Create_tile("Tile_C4");
    std::string str = tile->Get_appearance()[3];
    EXPECT_TRUE(str == "|  |CT|");
    delete tile;
    delete factory;
}

TEST(test5, testing_Rand_Tile){
    Tile_factory* factory = new Tile_factory;
    Tile* tile = factory->Create_tile(factory->Catalogue()[rand()%factory->Catalogue_size()]);
    std::string str = tile->Get_appearance()[5];
    EXPECT_TRUE((str == "|_____|")||(str == "|/___\\|")||(str == "|/____|")||(str == "|____\\|"));
    delete tile;
    delete factory;
}

TEST(test6, testing_Turn_is_working){
    EXPECT_TRUE(Turn());
}
