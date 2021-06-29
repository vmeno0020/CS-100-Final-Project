#include "gtest/gtest.h"
#include "sudokuboard_test.hpp"
#include <iostream>
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
