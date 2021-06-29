#include "SudokuBoard.hpp"
#include <iostream> 
#include <string> 
#include <cstring> 
#include <cstdlib> 

using namespace std; 

SudokuBoard* SudokuBoard::instance = NULL;

SudokuBoard* SudokuBoard::getInstance() {
    if (!instance) {
        instance = new SudokuBoard;  
    	return instance;
    }

}

SudokuBoard::~SudokuBoard(){ }

void SudokuBoard::StaticDestructor() { 
  delete instance; 
}
SudokuBoard::SudokuBoard(){}

int SudokuBoard::getScore(){
	int score = 0;
	int temp; 
	for(int i=0; i < 9; i++){
		for(int j=0; j <9; j++){
			if((userBoard[i][j] == gameBoard[i][j])){
				score++;
			}
		}
	}
	temp = 81-emptySlots;
	score = score - temp;
	cout << endl << "SCORE: " <<  score << "/" << emptySlots << endl;
	return score;	
}

void SudokuBoard::printBoard(){
	if (!instance) {
		return;
	 }
	
        cout << "   ";
        for (unsigned int i = 0; i < 9; i++) { 
  	  cout << (i + 1) << ' ';
  	  if (i == 2 || i == 5) { 
		cout << " | "; 
	}
	}
        cout << endl << " *************************" << endl;
	
	for(int i=0; i < 9; i++){
             cout << (i + 1) << "* "; 
		for(int j=0; j < 9; j++){
			if(j ==3 || j == 6){
				cout << " | ";
			}
			if (userBoard[i][j] != 0) { 
		          cout << userBoard[i][j] << " "; } 
			else { cout << "  "; } 
		
		}
		if(i == 2 || i == 5){
			cout << endl;
		
			cout << "**---------------------------"; 
		}
		cout << endl;
	}			
		
}

void SudokuBoard::makeEntry(){
	int input = 0;
        cout << "Which row?" << endl;
        cin >> input;  
	if (input < 1 || input > 9) { 
	   cout << "Invalid input!" << endl; 
   	   return;  
	}
        this->row = input-1; 
	input = 0; 
  	cout << "Which column?" << endl;
        cin >> input;
        if (input < 1 || input > 9) {
           cout << "Invalid input!" << endl;
           return; 
        }
	this->col = input - 1; 
	input = 0;
        cout << "What number for your entry?" << endl;
        cin >> input;
        if (input < 1 || input > 9) {
           cout << "Invalid input! Please try again." << endl;
           return; 
        }
	this->cellValue = input;	
	this->getEntry(row, col, cellValue);
}

int SudokuBoard::getCol(){
	return col + 1;
}

int SudokuBoard::getRow(){
	return row + 1;
}

int SudokuBoard::getCellValue(){
	return cellValue;
}

void SudokuBoard::getEntry(int row, int col, int cellValue){
	
	userBoard[row][col] = cellValue;
}


bool SudokuBoard::isEasy(){
	return easy;
}
bool SudokuBoard::isHard(){
	return hard;
}


void SudokuBoard::createGame(){
	string difficulty = "";  
	cout << "Select your difficulty (type 'easy' or 'hard'): " << endl; 
	GameStrategy* diff;
        while (difficulty != "easy" || difficulty != "hard") {
		cin >> difficulty;   
		if (difficulty == "easy") { 
        		diff = new EasyGame();
			easy =1;
			hard =0;
			break;  
		}  
		else if (difficulty == "hard") { 
			diff  = new HardGame();
			hard = 1;
			easy =0;
			break;  
		}
		else { 
		   cout << "invalid input! Please try again." << endl;  			
	} 	
     }

   //int** array = diff->generateGame();
   int** array =  diff->generateGame();   
   for (unsigned i = 0; i < 9; i++) { 
	for (unsigned k = 0; k < 9; k++) { 
           userBoard[i][k] = array[i][k];
	    if (array[i][k] == 0) { 
		emptySlots++; 
	   }       	     
	}
    }

//     emptySlots = 81 - emptySlots;  
   

   array = diff->generateSolution(); 
   for (unsigned i = 0; i < 9; i++) {
       for (unsigned k = 0; k < 9; k++) {
            gameBoard[i][k] = array[i][k];
        }
    }

    delete diff;  
	
 	  				
}

void SudokuBoard::exitGame(){
	cout << "Goodbye!" << endl; 
	atexit(StaticDestructor); 
	exit(0);
}

void SudokuBoard::getSolution(){
	cout << "   ";
        for (unsigned int i = 0; i < 9; i++) { 
  	  cout << (i + 1) << ' ';
  	  if (i == 2 || i == 5) { 
		cout << " | "; 
	}
	}
        cout << endl << " *************************" << endl;
	
	for(int i=0; i < 9; i++){
             cout << (i + 1) << "* "; 
		for(int j=0; j < 9; j++){
			if(j ==3 || j == 6){
				cout << " | ";
			}
			if (gameBoard[i][j] != 0) { 
		          cout << gameBoard[i][j] << " "; } 
			else { cout << "  "; } 
		
		}
		if(i == 2 || i == 5){
			cout << endl;
		
			cout << "**---------------------------"; 
		}
		cout << endl;
	}			
		
}
