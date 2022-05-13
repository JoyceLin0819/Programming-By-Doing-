Maxit is usually play on an nxn grid of squard. Each square contains a value ranging from -9 to 15. 
One of the square is initially designeated with a marker (**) indicating the current position. 
Player 1 may take any square on the same row as the marker. 
When Player 1 is done, Player 2 makes a similar move, except choosing between the square in the column. 
Play alternates until all squares are taken or until a players is left without a valid move. 
The player with the most points at the end of the game is the winner. 

The project is subdivided into the following files: 
Maxit.h - header file containing the class definiton and member function prototyeps 
Maxit.cpp - member function definitions
main.cpp - main application source file 

I start by creating a class "Maxit" that has attributes,  such as the size of the grid, player moves, net scores of the players (integer), player name (string) and the game stop /resume criteria (boolean). 

The various member functions work as follows: 
1. Maxit() - Constructor 
    a. allocates memory for the grid by taking input from the user (via the DisplayRules() function)
    b. initalize the stopping criterion and the players' scores

2. DisplayRules() 
    a. displays the introductory screen
    b. explain the game objectives 
    c. asking for the following inputs
        i. name of player 1 and player 2
        ii. level of difficulty (1 - 4x4, 2 - 6x6, 3 - 8x8 grid)

3. InitialGrid() - initalizes the grid by generating random numbers between -9 to 15. 
    NOTE: The frequency array makes sure that no number is repeated more than (n/2) times, where (n/2) is the size of the grid. Also, one of the elements of the grid is randomly allocated as the starting point, indicating by (**). This location is stored in c_row, c_column and it carries the value of 100. 

4. DisplayGrid() 
    a. displays the grid with the values generated from InitialGrid()
    b. displays the net scroes of player 1 and player 2

5. Play1_Choice() - Takes the input of the column number from Player 1. In the case of an invalid input (specifying a number out of bounds or selecting a column that is already taken), the user is prompted till a valid entry is obtained. In no valid chocies exist. game terminates. Options to display help or quit the game at any point are also included. 

6. Player1_Choice() - similar to Player1_Choice() and takes the input of row number from Player 2. 

7. DisplayHelp() - displays help whenever player enters 'H'. Player can choose to resume the game after this or quit the game.

8. result() - compares the scores of player 1 and  player 2 and displays the scores. Sets the stopping criterion to true.

9. endgame() - returns the stopping criterion value when called. 

The main functions calls the functions listed above, till the user quits the game or till the game ends.