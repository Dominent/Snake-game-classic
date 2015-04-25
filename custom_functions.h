#include <iostream>
#include <string>
#include <cstdlib> // exit(), srand(), 
#include <windows.h> // Sleep(), 
#include <ctime> // time(), 


using namespace std;


/*-------------------------------------------------------------*/

void draw_board(char playBoard[][75], int score){ //Draws a play board 23x75 big.( 100% Done )

	system("cls");

	cout << "Score: " << score << '\n';
	for (int x = 0; x < 23; x++){
		for (int y = 0; y < 75; y++){
			cout << playBoard[x][y];
		}
		cout << '\n';
	}
}

void quit_game(int score, int seconds){ //Displays score and quits after x secconds.( 100% Done )

	system("cls");
	cout << "GAME OVER!!!!\n\n";
	cout << "You got a score of: " << score << '\n';

	for (int i = 0; i <= seconds; ++i){
		Sleep(1000); //1000 milliseconds = 1 second
		cout << "The program will close in: " << 5 - i << " seconds." << endl;
	}
	exit(0); //1 - unsuccessful program termination, 0 - successful program termination 
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

void fruit(int fruitCount, char playBoard[][75]){ //Generate and set fruits at their corresponding possition. ( 100% Done )

	srand(time(NULL)); //Initializing random seed generator (using time() as seed)( 100% Done. )
	int up = 0;
	int left = 0;

	for (int x = 0; x < fruitCount; x++){

		up = (rand() % 22);
		left = (rand() % 74);

		if (playBoard[up][left] == 'o') fruit(fruitCount, playBoard);
		else if (playBoard[up][left] == '*') fruit(fruitCount, playBoard);
		else if (playBoard[up][left] == 177) fruit(fruitCount, playBoard);
		else playBoard[up][left] = '@';

	}
}
