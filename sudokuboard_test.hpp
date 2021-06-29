#ifndef __SUDOKUBOARD_TESTS_HPP__
#define __SUDOKUBOARD_TESTS_HPP__

#include "gtest/gtest.h"
#include "src/SudokuBoard.cpp"
#include <cstdlib>
#include <iostream>

using namespace std;

TEST(exitGame, functionCall){
        SudokuBoard *test = test->getInstance();
        test->createGame();

        ASSERT_EXIT(test->exitGame(), ::testing::ExitedWithCode(0), "");

	atexit(SudokuBoard::StaticDestructor);
}

TEST(createGame, createEasy){
	SudokuBoard *test = test->getInstance();
	test->createGame();
	
	EXPECT_EQ(test->isEasy(), 1);	
//	delete test;
}

TEST(createGame, createEasy2){
	SudokuBoard *test = test->getInstance();
       test->createGame();

        EXPECT_EQ(test->isHard(), 0);
//	delete test;
}

TEST(createGame, createHard){
        SudokuBoard *test = test->getInstance();
       test->createGame();

        EXPECT_EQ(test->isHard(), 1);
//	delete test;
}

TEST(createGame, createHard2){
        SudokuBoard *test = test->getInstance();
       test->createGame();

        EXPECT_EQ(test->isEasy(), 0);
//	delete test;
}

TEST(makeEntry, gettingCol3){
	SudokuBoard *test = test->getInstance();
	test->createGame();
	
	test->makeEntry();
	
	EXPECT_EQ(test->getCol(), 3);
//	delete test;
}

TEST(makeEntry, gettingRow9){
        SudokuBoard *test = test->getInstance();
       test->createGame();

        test->makeEntry();

        EXPECT_EQ(test->getRow(), 9);
//	delete test;
}

TEST(makeEntry, gettingCellValue2){
        SudokuBoard *test = test->getInstance();
       test->createGame();

        test->makeEntry();

        EXPECT_EQ(test->getCellValue(), 2);
//	delete test;
}

#endif
