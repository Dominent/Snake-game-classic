/***********************************************,
* Creator: Petromil "Dominent" Pavlov 
* Title: Snake game classic
* Made because: Eductional purposes.
* A big thanks to:
* Start: 25.04.2015. End: 
************************************************'
*/

#include "custom_functions.h"

/*---------------- Function prototypes ----------------*/
void draw_board(char playBoard[][75], int score);
void quit_game(int score, int seconds);
/*-----------------------------------------------------*/



int main(){
	int score= 0; // Stores here the score of the user.
	char playBoard[23][75]; //Using 2D array to create a Matrix for the snake to move.
	int secToClose = 5; //Secconds after which the program quits.
	
	draw_board(playBoard, score);
		
	
	char ch;
	cin >> ch;

	quit_game(score, secToClose);
}

