#include "gtest/gtest.h"

int main(int num, char** name)
{
    ::testing::InitGoogleTest(&num, name);
    return RUN_ALL_TESTS();
}
