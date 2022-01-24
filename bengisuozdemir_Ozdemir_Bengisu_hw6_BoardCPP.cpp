#include "bengisuozdemir_Ozdemir_Bengisu_hw6_boardHeader.h"
template <class itemType>
Board<itemType>::Board(int row, int col)
{
	matrix = new cards<itemType>*[row];
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new cards<itemType>[col];
	}
	x = row;
	y = col;
}
template <class itemType>
Board<itemType>::~Board()
{
	for (int i = 0; i < x; i++)
	{
		delete [] matrix[i];
		matrix[i] = NULL;
	}
	delete [] matrix;
	matrix = NULL;
}
template <class itemType>
void Board<itemType>::readBoardFromFile(ifstream &is)
{//pre-condition: starts from the second line of the file, containing char or int
	string line;
	int i = 0; //row
	while(getline(is, line))
	{
		itemType item;
		istringstream strstream(line);
		int j = 0; //column
		while (strstream>>item)
		{
			matrix[i][j].card = item;
			matrix[i][j].status = false;
			j++;
		}
		i++;
	}
}//post-condition: empty matrix filled with the info from files
template <class itemType>
void Board<itemType>::displayBoard()
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if(matrix[i][j].status == true)
			{
				cout << matrix[i][j].card << " ";
			}
			else
			{
				cout << "X ";
			}
		}
		cout << endl;
	}
}
template <class itemType>
void Board<itemType>::closeCard(int row, int col)
{
	matrix[row][col].status = false;
}
template <class itemType>
int Board<itemType>::getRow()
{
	return x;
}
template <class itemType>
int Board<itemType>::getColumn()
{
	return y;
}
template <class itemType>
cards<itemType>** Board<itemType>::getMatrix()
{
	return matrix;
}
template <class itemType>
bool Board<itemType>::getStatus(int row, int col)
{
	return matrix[row][col].status;
}