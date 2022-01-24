#include "bengisuozdemir_Ozdemir_Bengisu_hw6_PlayerHeader.h"
template<class itemType>
Player<itemType>::Player(Board<itemType> & mainBoard): myBoard(mainBoard)
{
	score = 0;
}
template<class itemType>
const itemType& Player<itemType>::openCard(int row, int col)
{
	myBoard.getMatrix()[row][col].status = true;
	return myBoard.getMatrix()[row][col].card;
}
template<class itemType>
bool Player<itemType>::validMove(int row, int col)
{
	if(row >= 0 && col >= 0 && myBoard.getRow() > row && myBoard.getColumn() > col && !myBoard.getStatus(row, col))
		return true;
	return false;
}
template<class itemType>
void Player<itemType>::increaseNumberOfSuccess()
{
	score++;
}
template<class itemType>
int Player<itemType>::getNumberOfSuccess()
{
	return score;
}