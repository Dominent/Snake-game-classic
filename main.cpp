/***********************************************,
* Creator: Petromil "Dominent" Pavlov 
* Title: Snake game classic
* Made because: Eductional purposes.
* A big thanks to:
* Start: 25.04.2015. End: 
************************************************'
*/

//ToDo: implement difficulty, make the snake length dynamic, add collision detection for the snake.

#include "custom_functions.h"
#include "snake.h"
#include "menu.h"

/*---------------- Function prototypes ----------------*/

void draw_board(char playBoard[][75], int score);
void quit_game(int score, int seconds);
void create_frame(char playBoard[][75]);
void fruit(int *fruitCount, char playBoard[][75]);

/*-----------------------------------------------------*/

int main(){
	int menuInput = 0; //Menu input from the user.
	int score= 0; // Stores the score of the user.
	char playBoard[23][75]; // Using 2D array to create a Matrix for the snake to move.
	bool Quit = false; 
	int dirInput = 1; // Direction input from the user.
	int fruitCount = 3; //Total count of fruits ingame.
	int *pFruitCount = &fruitCount; //fix void fruit()
	
	menu myMenu;
	myMenu.show();
	
	cin >> menuInput;
		
	if (menuInput == 1){
		
		
	while (Quit == false){ //Game loop

		draw_board(playBoard, score);
		create_frame(playBoard);
		dirInput = input();
		Snake mySnake;
		Quit = mySnake.move(playBoard, dirInput);
		
		fruit(*pFruitCount, playBoard); 
				
	}

	myMenu.endgame(score, 10);
	
	}
	else if (menuInput == 1)myMenu.options();
	else if (menuInput == 3)myMenu.endgame(score, 10);
	else {
		cout << "Wrong input" << endl;
		exit(1);
	}
	

	return 0;
}
