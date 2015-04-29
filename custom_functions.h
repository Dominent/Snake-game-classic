#include <iostream>
#include <string>
#include <cstdlib> // exit(), srand(), 
#include <windows.h> // Sleep(), 
#include <ctime> // time(), 
#include <conio.h> // _kbhit(),

using namespace std;

/*-------------------------------------------------------------*/

void draw_board(char playBoard[][75], int score){ //Draws a play board 23x75 big.( 100% Done. )

	system("cls");

	cout << "Score: " << score << '\n';
	for (int x = 0; x < 23; x++){
		for (int y = 0; y < 75; y++){
			cout << playBoard[x][y];
		}
		cout << '\n';
	}
}


void create_frame(char playBoard[][75]){ //Creates the frame.( 100% Done )

	for (int x = 0; x < 23; x++)
	{
		for (int y = 0; y < 75; y++)
		{
			if (playBoard[x][y] != '@'){

				if (x == 0 || x == 22 || y == 0 || y == 74)playBoard[x][y] = 177;
				else playBoard[x][y] = ' ';
			}
		}
	}
}

void fruit(int &fruitCount, char playBoard[][75]){ //Generate and set fruits at their corresponding possition. (  )

	srand(time(NULL)); //Initializing random seed generator (using time() as seed)( 100% Done. )
	int up = 0;
	int left = 0;

	for (int x = 0; x < fruitCount; x++){
		
		up = (rand() % 22);
		left = (rand() % 74);

		if (playBoard[up][left] == 'o') x = 0;
		else if (playBoard[up][left] == '*') x = 0;
		else if (playBoard[up][left] == 177) x = 0;
		else {
			--fruitCount;
				playBoard[up][left] = '@';
		}
	}
}// ToDO fruit count needs to be pointer

int input(){ //Gets input from keyboard( 100% Done. )
	int key = 0;
	int direction = 0;
	if (_kbhit()){

		key = _getch();

		switch (key){
		case 72:direction = 1; //Up Arrow
			break;
		case 80: direction = 2; //Down Arrow
			break;
		case 75: direction = 3; //Left Arrow
			break;
		case 77: direction = 4; //Right Arrow
			break;
		default:
			break;
		}
		return direction;
	}
	else return 0;
	
}
