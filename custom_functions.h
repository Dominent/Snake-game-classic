#include <iostream>
#include <string>
#include <cstdlib> // exit()
#include <windows.h> // Sleep()


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

void quit_game(int score, int seconds){ //Displays score and quits after x secconds.

	system("cls");
	cout << "GAME OVER!!!!\n\n";
	cout << "You got a score of: " << score << '\n';

	for (int i = 0; i <= seconds; ++i){
		Sleep(1000);
		cout << "The program will close in: " << 5 - i << " seconds." << endl;
	}
	exit(0); //1 - unsuccessful program termination, 0 - successful program termination 
}