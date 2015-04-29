class Snake{

public:
	Snake(int in_yAxis = 19, int in_xAxis = 1, int in_val1x = 0, int in_va2x= 0, int in_val1y = 1, int in_val2y = 2, int in_testValue = 0, bool in_Quit = false); //constructor, initialize values
	bool move(char playBoard[][75], int dirInput);//(char playBoard[][75], char Snake[][75], int dirInput)

private:
	int yAxis;
	int xAxis;
	int val1x;
	int val2x;
	int val1y;
	int val2y;
	int testValue;
	bool Quit;
	

};