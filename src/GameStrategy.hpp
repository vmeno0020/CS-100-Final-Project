#ifndef __GAMESTRATEGY_HPP__
#define __GAME_STRATEGY_HPP__
#include <vector>
#include "SudokuBoard.hpp"

using namespace std;
class GameStrategy {
public:
    GameStrategy() {}
    virtual int** generateGame()=0;
    virtual int** generateSolution()=0;
    virtual ~GameStrategy() = default; 
};

#endif
