#ifndef bengisuozdemir_Ozdemir_Bengisu_hw6_PlayerHeader_h
#define bengisuozdemir_Ozdemir_Bengisu_hw6_PlayerHeader_h
#include <iostream>
#include <string>
#include "bengisuozdemir_Ozdemir_Bengisu_hw6_boardHeader.h"
using namespace std;
template<class itemType>
class Player
{
private:
	Board<itemType> &myBoard; //the board that is being played on
	int score; //player's score
public:
	Player(Board<itemType> & ); //default constructor
	const itemType &openCard(int, int); //opens the selected card and returns it
	bool validMove(int, int); //checks a move is valid or not
	void increaseNumberOfSuccess(); //increases the score
	int getNumberOfSuccess(); //returns the score
};

#include "bengisuozdemir_Ozdemir_Bengisu_hw6_PlayerCPP.cpp"
#endif bengisuozdemir_Ozdemir_Bengisu_hw6_PlayerHeader_h