#pragma once
#include <iostream>

using namespace std;

class Tile {
private :
		int coord[2];
public :
	virtual ~Tile() = default;
	virtual void MakeTile() = 0;
	virtual void use() = 0;
	void setCoord(int x, int y)
	{
		coord[0] = x;
		coord[1] = y;
	}    
	void showCoord()
	{
		cout << "[" << coord[0] << "," << coord[1] << "]";
	}
};

class OrdinaryTile : public Tile {
public :
	void MakeTile()
	{
		cout << "O";
	}
	void use() {};
};

class TntTile : public Tile {
public :
	void MakeTile()
	{
		cout << "TNT";
	}
	void use() {
		cout << "TNT is Exploded"; showCoord();
		cout << endl;
	};
};

class RocketTile : public Tile {
public:
	void MakeTile()
	{
		cout << "Roc";
	}
	void use() { 
		cout << "Rocket is Exploded"; showCoord();
		cout << endl;
	};
};
