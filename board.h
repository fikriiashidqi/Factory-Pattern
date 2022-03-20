#pragma once
#include "TilesFactory.h"
#define xlength 5
#define ylength 5

class Board
{
private:
	Tile* array[xlength][ylength];
	TilesFactory tilefactory;
public:
	Board()
	{
		for (int i = 0; i < xlength; i++)
		{
			for (int j = 0; j < ylength; j++)
			{
				if ((j + 1 + i) % 2 == 0)
				{
					array[i][j] = tilefactory.getTile("tnt");
				}
				else {
					array[i][j] = tilefactory.getTile("roc");
				}
			}
		}
	}

	void GenerateBoard()
	{ 
		for (int i = 0; i < xlength; i++)
		{
			cout << "| ";
			for (int j = 0; j < ylength; j++)
			{
				if (array[i][j] != NULL)
					array[i][j]->MakeTile();
				cout << " | ";
			}
			cout << endl;
		}    
	}

	void use(int x, int y)
	{
		array[x][y]->use();
		array[x][y] = NULL;
	}
};
