#include "Board.h"

int main()
{
	int x, y;
	Board board;
	char option = 'y'; 

	board.GenerateBoard();

	while (option != 'n')
	{
		cout << endl << "Use Tile on Coordinate : " << endl;
		cout << "[Row] = "; cin >> x;    

		cout << "Use Tile on Coordinate : " << endl;
		cout << "[Coloumn] = "; cin >> y;

		board.use(x, y);
		cout << endl;
		board.GenerateBoard();
		cout << endl;
		cout << "Create Again ? (y/n) : "; cin >> option;
	}
}
