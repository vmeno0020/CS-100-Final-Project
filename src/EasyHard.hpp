#ifndef __EASY_HARD_HPP__
#define __EASY_HARD_HPP__

#include "GameStrategy.hpp"
#include "time.h"
#include <stdlib.h>
#include <stdio.h>

class HardGame: public GameStrategy {
public:
    HardGame(){}
    ~HardGame(){
	for (unsigned i = 0; i < 9; ++i) {
    	    delete[] board[i];
  	 }
  	 delete[] board;

} 

    virtual int** generateGame(){
	int x = 0;
            int y = 0;
            srand(time(NULL));
            board = new int*[9];
            for (unsigned i = 0; i < 9; i++) {
                board[i] = new int[9];
                for (unsigned j = 0; j < 9; j++) {
                   board[i][j] = grid[i][j];
                }
            }
            for (unsigned i = 0; i < 57; i++) {
                x = rand() % 9;
                y = rand() % 9;
                board[x][y] = 0;

            }
            return board;
			
	}
    virtual int** generateSolution(){
	for (unsigned i = 0; i < 9; i++) { 
        for (unsigned k = 0; k < 9; k++) {
            board[i][k] = grid[i][k];
        }
   }
  return board;
} 

protected:
     int** board = 0; 
     int grid[9][9] = {{5, 3, 4, 6, 7, 8, 9, 1, 2},
                       {6, 7, 2, 1, 9, 5, 3, 4, 8},
                       {1, 9, 8, 3, 4, 2, 5, 6, 7},
                       {8, 5, 9, 7, 6, 1, 4, 2, 3},
                       {4, 2, 6, 8, 5, 3, 7, 9, 1},
                       {7, 1, 3, 9, 2, 4, 8, 5, 6},
                       {9, 6, 1, 5, 3, 7, 2, 8, 4},
                       {2, 8, 7, 4, 1, 9, 6, 3, 5},
                       {3, 4, 5, 2, 8, 6, 1, 7, 9}
                       };
};

class EasyGame: public GameStrategy {
public:
    EasyGame(){} 
    ~EasyGame(){ 
  	 for (unsigned i = 0; i < 9; ++i) { 
		delete [] board[i]; 
	   }

	   delete[] board;
	}
  
    virtual int** generateGame(){
	 int x = 0;
            int y = 0;
            srand(time(NULL)); 
	    board = new int*[9];
	    for (unsigned i = 0; i < 9; i++) { 
		board[i] = new int[9]; 
		for (unsigned j = 0; j < 9; j++) { 
		   board[i][j] = grid[i][j]; 
		}
	    } 	            
            for (unsigned i = 0; i < 29; i++) {
                x = rand() % 9;
                y = rand() % 9;
                board[x][y] = 0;

            }
            return board;
}
    virtual int** generateSolution(){
	for (unsigned i = 0; i < 9; i++) { 
	for (unsigned k = 0; k < 9; k++) { 
	    board[i][k] = grid[i][k]; 
	}
    
   }
   
  return board; 
} 
protected:
    int** board = 0; 
    int grid[9][9] = {{4,3,1,6,7,9,5,2,8}, 
                       {9,6,7,2,5,8,3,4,1}, 
                       {5,8,2,1,4,3,9,6,7},
                       {6,5,9,8,1,7,2,3,4},
                       {3,2,8,5,6,4,1,7,9},
                       {7,1,4,9,3,2,8,5,6},
                       {8,7,3,4,2,1,6,9,5},
                       {1,4,5,3,9,6,7,8,2},
                       {2,9,6,7,8,5,4,1,3}
   		  };
	
};

#endif
