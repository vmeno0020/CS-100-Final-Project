#include "src/SudokuBoard.cpp"
#include <iostream> 


using namespace std; 

int main() {
	SudokuBoard* test; 
	char input = 'x'; 
        cout << "Welcome to our Soduku game! Press 1 to start." << endl;                
	cin >> input; 
        if (input == '1') { 
	   test = test->getInstance();
	   test->createGame();
	   test->printBoard();   
	} else { 
            cout << "Invalid input..exiting game. Bye!" << endl;
	    return 0;  
	} 
	input = 'x'; 
	while (input != 'd') { 
	   cout << endl <<  "Menu Controls:" << endl << "a - Make an entry" << endl << "b - View board" << endl << 
           "c - Get current score" << endl << "d - Quit Game" << endl << "e - Show solution" <<endl; 
	    cout << "Select an option:" << endl; 
	    cin.clear();  
	    cin >> input; 
	    if (input == 'a') { 
		test->makeEntry(); 
	   } else if (input == 'b') { 
		test->printBoard(); 
	    } else if (input == 'c') { 
		test->getScore(); 
	   } else if (input == 'd') { 
		test->exitGame(); 		
	  } else if(input == 'e'){
		test->getSolution();
	   } else { 
		cout << "Invalid input! Please try again." << endl; 
	  }
	
    }

	delete test;

   return 0; 
	 
}
