# Sudoku
 
 > Authors: Vishal Menon, Nuha Rahman, Hannah Cierlak

## Project Description:
 > **Why is it important or interesting to you?**
 > 
 > This project is interesting to us because we all share an enthusiasm for the game Sudoku and wanted to gain a deeper understanding into how all the parts of the game would go together in code (C++). And because it will be a fun opportunity to translate our knowledge of programming into simple game development. This will be a great and challenging task for our goal of expanding our familiarity with game development.
 > **What languages/tools/technologies do you plan to use?
 >   * [toolname](link) - Short description**
 >   
 >   We plan to use C++, Github, and Git. We will work on this project through the Terminal using UCR's Hammer server.
 > * **What will be the input/output of your project?**
 > 
 > At its most basic level, the program will start by outputting a menu, prompting the user to begin a game. It will take numbers as an input, and generate an  > > > updated soduku board as an output, in addition to the numbers entered. With each move, the menu should be continuously output, taking letters as input, allowing > the user to regenerate a board view, or to quit the game. If we have the time, we would also like to add features such as allowing the user to enter the level of > difficulty they would like for their soduku game (via letter options as input), an option allowing users to view whether their entry was correct, as well as timed games. 
 > * **What are the two design patterns you will be using? For each design pattern you must explain in 4-5 sentences:**
 > 
 > Firstly we would like to use Singleton, as the program should be pretty simple and users can make sure that a class just has a single instance and a global access point is provided to that instance. In a game like Sudoku, where there is only one game board, it would make sense to use Singleton since it allows us to have only one instance of game board object that would be accessible to all clients. A problem that we anticipate to enocunter when implementing our project is that we may not have full control over global variables and more than one instance of the board object may be necessary. Singleton solves this issue by ensuring a class only has a single instance of an object and the game board object would be initialized only when it’s requested for the first time.
 >
 >  We would also like to use Strategy, as there are some algorithms such as where number will be displayed on the board, how the user will select the square they want to write an entry into, etc .  that should be hidden from the users. Since these algorithms will be closely related in terms of implementation, it would be convenient if they were encapsulated. Furthermore, Strategy allows for the clients of our project to choose the correct algorithm, so the need of multiple "if-else" statements would be eliminated. One issue that we expect to encounter when implementing our project using Strategy is that our project has to be aware of all the possible strategies in order to select the right one for the right siutation so we would expect testing to be quite complicated. However, in a game like sudoku, where you can have varying levels of difficulty, with strategy, unit testing would be relatively simple because each algorithm has its own class which can be tested by their own interface.

## Class Diagram

<img width="606" alt="Screen Shot 2021-06-01 at 11 17 02 AM" src="https://user-images.githubusercontent.com/77302524/120371623-ed93c980-c2ca-11eb-8f64-dcc679b69f01.png">
 

 
 ## Screenshots
 > Easy Game :
 <img width="551" alt="Screen Shot 2021-06-01 at 12 36 42 AM" src="https://user-images.githubusercontent.com/77302524/120285073-c1982a00-c271-11eb-9dce-a418d141e3a9.png">
 
 <img width="529" alt="Screen Shot 2021-06-01 at 12 36 50 AM" src="https://user-images.githubusercontent.com/77302524/120285305-f7d5a980-c271-11eb-9ce5-4aa74538ebb4.png">
 
 <img width="477" alt="Screen Shot 2021-06-01 at 12 37 02 AM" src="https://user-images.githubusercontent.com/77302524/120285350-00c67b00-c272-11eb-8635-08dcf46b5e0d.png">
 
 <img width="427" alt="Screen Shot 2021-06-01 at 12 37 10 AM" src="https://user-images.githubusercontent.com/77302524/120285383-09b74c80-c272-11eb-9478-383fba14a4c0.png">
 
 >Hard Game :
 <img width="538" alt="Screen Shot 2021-06-01 at 12 38 27 AM" src="https://user-images.githubusercontent.com/77302524/120285418-150a7800-c272-11eb-95ab-8bd3a495ce89.png">
 
 <img width="507" alt="Screen Shot 2021-06-01 at 12 38 35 AM" src="https://user-images.githubusercontent.com/77302524/120285452-1cca1c80-c272-11eb-94ac-efa9d4b99931.png">
 
 ## Installation/Usage
 > Instructions on installing and running your application
 > To run the Sudoku game, type g++ main.cpp src/SudokuBoard.cpp -o Sudoku and then use the ./Sudoku command.
 > Or type command cmake3 . and then make and run ./Sudoku to play.
 ## Testing
 > Our project was tested using the google test submodule. We conducted unit tests for various functions implemented in our project.
