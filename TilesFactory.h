#pragma once
#include "Tiles.h"

class TilesFactory 
{
public :
	Tile* getTile(string type)
	{
			if (type == "ord")
			{
				return new OrdinaryTile();
			}
			else if (type == "tnt")
			{
				return new TntTile();
			}
			else if (type == "roc")
			{
				return new RocketTile();
			}
	}
};   
