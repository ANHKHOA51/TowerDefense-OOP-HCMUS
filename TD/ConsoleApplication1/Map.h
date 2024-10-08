#pragma once
#include "Figure.h"

using namespace std;

class Map : public Figure {
private:
	Coordinate coord_main_tower;
	Coordinate * path_enemy;
	short len_path;
public:
	Map(string);
	~Map();
	void buildMap();
	Coordinate getCoordinateOfPath(short);
	short getLengthOfMap();
};