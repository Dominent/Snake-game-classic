#include "frame.h"
#include <cstdlib> // system(),
#include <iostream> // cout
#include <ctime> // time(),

void frame::draw(int score){

	system("cls");

	std::cout << "Score: " << score << '\n';
	for (int x = 0; x < 23; x++){
		for (int y = 0; y < 75; y++){
			std::cout << playBoard[x][y];
		}
		std::cout << '\n';
	}
	
}

void frame::create(){

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
void frame::fruit(){ //Generate and set fruits at their corresponding possition. (  )

	srand(time(NULL)); //Initializing random seed generator (using time() as seed)( 100% Done. )
	int up = 0;
	int left = 0;
	int fruitCount = 3; //Stores the maximum number of fruits that are spawned. 
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
}