#pragma once
#include <iostream>
#include "Graphic.h"
#include "Coordinate.h"
#include "ToolInGame.h"

using namespace std;

class Figure {
protected:
	Graphic costume;
	Coordinate cur_coord;
public:
	void setCostume(string);
	Graphic & getCostume();
	void setCurrentCoordinate(short, short);
	Coordinate getCurrentCoordinate();
};