#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <time.h>//CLOCKS_PER_SEC
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //input from keyboard

using namespace std;

inline void stop_clossing(){

	char ch;
	cin >> ch;

};

void almost_equal(double valx, double valy){

	if (valx + 0.1 == valy || valx - 0.1 == valy ||
		valy + 0.1 == valx || valy - 0.1 == valx){

		cout << "The numbers are almost equal" << '\n';
	}
};

void WritetoFile(string name, string text){

	ofstream myfile(name);

	myfile.open(name);		//oppens file
	
	if (myfile.is_open()){

		myfile << text << endl;
	
	myfile.close();		//closes file

	}

	else cout << "Unable to open file! " << endl;

}

bool VectorCheck(int value, vector <int> MyVector){
	bool flag;
	vector<int>::const_iterator iter;
	iter = find(MyVector.begin(), MyVector.end(), value);

	if (iter != MyVector.end()) flag = 1;		// Equal value detected.
	else flag = 0;

	return flag;
}


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
	exit(1);
}