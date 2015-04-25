/***********************************************,
* Creator: Petromil "Dominent" Pavlov 
* Title: Snake
* Made because: Eductional purposes.
* A big thanks for: *
************************************************'
*/

#include "custom_functions.h"
/*---------------- Function prototypes ----------------*/
void draw_board(char playBoard[][75], int score);
/*-----------------------------------------------------*/



int main(){
	int score= 0; // Stores here the score of the user.
	char playBoard[23][75]; //Using 2D array to create a Matrix for the snake to move.

	draw_board(playBoard, score);

	char ch;
	cin >> ch;

}


