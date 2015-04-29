#include "menu.h"
#include <iostream>
#include <string>
#include <cstdlib> // system(),
#include <windows.h> // Sleep(),

using namespace std;

void menu::show(){ // Done(100%)

	cout << "" << endl;
	cout << " -----------------------------------------------  " << endl;
	cout << "|                                               | " << endl;
	cout << "|    ******   *     *      *     *  *  *****    | " << endl;
	cout << "|   *         * *   *     * *    * *   *        | " << endl;
	cout << "|    ******   *  *  *    *   *   **    ****     | " << endl;
	cout << "|          *  *   * *   *******  * *   *        | " << endl;
	cout << "|    ******   *     *  *       * *  *  *****    | " << endl;
	cout << "|                                               | " << endl;
	cout << " -----------------------------------------------  " << endl;
	cout << "" << endl << endl;
	cout << "                     M E N U:    " << endl << endl;
	cout << "                  1: Start Game  " << endl << endl;
	cout << "                  2: Options    " << endl << endl;
	cout << "                  3: Exit     " << endl << endl;
		
}

void menu::help(){ // Done(100%)

char sel;
system("cls");

while (true){
cout<<" -------------------------------------------------"<<endl;
cout<<"|                        ^                       |"<<endl;
cout<<"|                        | - up                  |"<<endl;
cout<<"|                                                |"<<endl;
cout<<"|            left - <-        -> - right         |"<<endl;
cout<<"|                                                |"<<endl;
cout<<"|                        !- down                 |"<<endl;
cout<<"|                                                |"<<endl;
cout<<"|								                |"<<endl;
cout<<"|                                                |"<<endl;
cout<<" -------------------------------------------------"<<endl<<endl<<endl;
cout<<"Go back? [y/n]  ";

cin>>sel;

if(sel=='y') return; //return to previous expression(statement)
else system("cls");

}
}

void menu::endgame(int score, int seconds){ // Done(100%)

	cout << "" << endl << endl;
	cout << " ------------------------------------------------------------------------- " << endl;
	cout << "|    *****      *     *       * ******       ****  *       ****** ****    |" << endl;
	cout << "|   *          * *    * *   * * *           *    *  *     * *     *   *   |" << endl;
	cout << "|   *  ****   *   *   *  * *  * *****       *    *   *   *  ****  ****    |" << endl;
	cout << "|   *  *  *  *******  *   *   * *           *    *    * *   *     * *     |" << endl;
	cout << "|    *****  *       * *       * ******       ****      *    ***** *   *   |" << endl;
	cout << " ------------------------------------------------------------------------- " << endl;
	cout << "" << endl << endl;
	cout << "                        Y O U R   S C O R E : " << score << endl << endl;
	cout << "" << endl << endl;

	for (int i = 0; i <= seconds; ++i){
		Sleep(1000); //1000 milliseconds = 1 second
		cout << "The program will close in: " << 5 - i << " seconds." << endl;
	}
	exit(0); //1 - unsuccessful program termination, 0 - successful program termination 
}

void menu::credits(){ // Done(100%)
char sel;
system("cls");

while (true){
	cout << "" << endl << endl;
	cout << "               Lead programmer: Dominent " << endl << endl;
	cout << "               Designer: Dominent " << endl << endl;
	cout << "               Testers: Dominent and brat_mi " << endl << endl;
	cout << "               Special thanks to: Dominent " << endl << endl << endl;
	cout << "Go back? [y/n]  ";
	cin >> sel;
	if (sel == 'y') return;
	else system("cls");
}
}

void menu::difficulty(){// implement difficulty
	char sel;
	system("cls");

	cout << "          C H O O S E   D I F F I C U L T Y :" << endl << endl;
	cout << "                       1: Easy        " << endl << endl;
	cout << "                       2: Normal      " << endl << endl;
	cout << "                       3: Hard        " << endl << endl;
	cout << "                       4: Super Hard  " << endl << endl;
	cout << "                       5: Impossible  " << endl << endl << endl << endl;
	cout << "                       6: Go Back     " << endl << endl;

	cin >> sel;

}

void menu::options(){ // Done(100%)

	char sel;
	system("cls");
	while (true){

		system("cls");
		cout << "" << endl << endl;
		cout << "                          O P T I O N S:      " << endl << endl;
		cout << "                       1: Choose Difficulty   " << endl << endl;
		cout << "                       2: Controls            " << endl << endl;
		cout << "                       3: Credits             " << endl << endl;
		cout << "                       4: Go Back             " << endl << endl;
		cin >> sel;
		if (sel == '1') difficulty();
		else if (sel == '2') help();
		else if (sel == '3') credits();
		else if (sel == '4') return;
		else system("cls");
	}
}
