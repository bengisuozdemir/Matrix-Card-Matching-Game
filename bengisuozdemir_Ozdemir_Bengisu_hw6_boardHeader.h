#ifndef bengisuozdemir_Ozdemir_Bengisu_hw6_boardHeader_h
#define bengisuozdemir_Ozdemir_Bengisu_hw6_boardHeader_h
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
/*
The purpose of this homework is to practice template usage and implementing programs with two different headers via object sharing.
Bengisu Ozdemir 26683 
*/
template <class itemType>
struct cards 
{
	itemType card;
	bool status; //open = true, false = close

	//default constructor
	cards(): card(), status(false) {} //cards are closed initialy

	//constructor
	cards(const itemType & _c, bool _s)
		: card(_c), status(_s) {}
};
template <class itemType>
class Board
{
private:
	cards<itemType> ** matrix; //pointer of a pointer to store matrix
	int x; //stores the num of row
	int y; //stores the num of column
public:
	Board(int, int); //constructor
	~Board(); //destructor
	void readBoardFromFile(ifstream&); //reads from the file(s) and fills the matrix
	void displayBoard(); //displays the board that is played on
	void closeCard(int, int); //closes the desired card
	int getRow(); //returns the number of row in the matrix
	int getColumn(); //returns the number of columns in the matrix
	cards<itemType> ** getMatrix(); //retruns the matrix
	bool getStatus(int, int); //returns the status' of matrix
};
#include "bengisuozdemir_Ozdemir_Bengisu_hw6_BoardCPP.cpp"
#endif bengisuozdemir_Ozdemir_Bengisu_hw6_boardHeader_h
