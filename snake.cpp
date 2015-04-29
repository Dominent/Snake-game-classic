#include "snake.h"
#include <windows.h> // Sleep(), 

Snake::Snake(int in_yAxis, int in_xAxis, int in_val1x, int in_val2x, int in_val1y, int in_val2y, int in_testValue, bool in_Quit){

	yAxis = in_yAxis;
	xAxis = in_xAxis;
	val1x = in_val1x;
	val2x = in_val2x;
	val1y = in_val1y;
	val2y = in_val2y;
	testValue = in_testValue;
	Quit = in_Quit;

}

bool Snake::move(int dirInput){ 

	playBoard[21][1] = '*';

		if (dirInput == 0){ //Default

			playBoard[yAxis][xAxis] = '*';
			playBoard[yAxis + val1y][xAxis - val1x] = '&';
			playBoard[yAxis + val2y][xAxis - val2x] = '&';
						
			if (testValue == 0)--yAxis;
			else if (testValue == 1)--yAxis;
			else if (testValue == 2) ++yAxis;
			else if (testValue == 3) --xAxis;
			else if (testValue == 4)++xAxis;

			Sleep(25);
		}

		else if (dirInput == 1){ //Up
			val1y = 0;
			val2y = 0;
			val1x = 1;
			val2x = 2;
			playBoard[yAxis][xAxis] = '*';
			playBoard[yAxis + val1y][xAxis - val1x] = '&';
			playBoard[yAxis + val2y][xAxis - val2x] = '&';

			--yAxis;
			testValue = 1;
		}
		else if (dirInput == 2){ //Down
			val1y = 1;
			val2y = 2;
			val1x = 0;
			val2x = 0;
			playBoard[yAxis][xAxis] = '*';
			playBoard[yAxis + val1y][xAxis + val1x] = '&';
			playBoard[yAxis + val2y][xAxis + val2x] = '&';

			--yAxis;
			testValue = 2;
		}
		else if (dirInput == 3){//Left
			val1y = 0;
			val2y = 0;
			val1x = 1;
			val2x = 2;
			playBoard[yAxis][xAxis] = '*';
			playBoard[yAxis + val1y][xAxis - val1x] = '&';
			playBoard[yAxis + val2y][xAxis - val2x] = '&';

			--xAxis;
			testValue = 3;
		}
		else if (dirInput == 4){ //Right
			val1y = 0;
			val2y = 0;
			val1x = 1;
			val2x = 2;
			playBoard[yAxis][xAxis] = '*';
			playBoard[yAxis + val1y][xAxis + val1x] = '&';
			playBoard[yAxis + val2y][xAxis + val2x] = '&';

			++xAxis;
			testValue = 4;
		}
		return Quit; // need to add quit for checks!
}
		
