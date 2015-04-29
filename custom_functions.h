#include <iostream>
#include <string>
#include <cstdlib> // exit(), srand(), 
#include <conio.h> // _kbhit(),

using namespace std;

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
