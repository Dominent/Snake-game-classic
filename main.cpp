/***********************************************,
* Creator: Petromil "Dominent" Pavlov 
* Title: Snake game classic
* Made because: Eductional purposes.
* A big thanks to:
* Start: 25.04.2015. End: 
************************************************'
*/

//ToDo: implement difficulty, make the snake length dynamic, add collision detection for the snake, and implement score.
//BUG (Snake does not appear after commit 5!)

#include "custom_functions.h"
#include "snake.h"
#include "menu.h"
#include "frame.h"

/*---------------- Function prototypes ----------------*/
int input();
/*-----------------------------------------------------*/

int main(){
	int menuInput = 0; //Menu input from the user.
	int score= 0; // Stores the score of the user.
	bool Quit = false; 
	int dirInput = 1; // Direction input from the user.
		
	menu myMenu;
	frame myFrame;
	Snake mySnake;
	myMenu.show();
	
	cin >> menuInput;
		
	if (menuInput == 1){
	

		
	while (Quit == false){ //Game loop

		myFrame.draw(score);
		myFrame.create();
		dirInput = input();
		Quit = mySnake.move(dirInput);
		myFrame.fruit();
				
	}

	myMenu.endgame(score, 5);
	
	}
	else if (menuInput == 1)myMenu.options();
	else if (menuInput == 3)myMenu.endgame(score, 5);
	else {
		cout << "Wrong input" << endl;
		exit(1);
	}
	

	return 0;
}
