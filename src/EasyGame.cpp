#include "EasyHard.hpp"

EasyGame::EasyGame() {}

int** EasyGame::generateGame() {
            int x = 0;
            int y = 0;
            srand(0); 
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

int** EasyGame::generateSolution() { 
   for (unsigned i = 0; i < 9; i++) { 
	for (unsigned k = 0; k < 9; k++) { 
	    board[i][k] = grid[i][k]; 
	}
    
   }
   
  return board; 
}

EasyGame::~EasyGame() { 
   for (unsigned i = 0; i < 9; i++) { 
	delete[] board[i]; 
   }
   delete[] board; 
}
