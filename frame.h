#ifndef FRAME_H
#define FRAME_H
class frame {

public:
	
	void draw(int score);
	void create();
	void fruit();

protected: // Any classes that inherit this class can acces this directly!
	char playBoard[23][75];// Using 2D array to create a Matrix for the snake to move.
	

};

#endif