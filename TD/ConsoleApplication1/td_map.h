#pragma once
#include "td_figure.h"

using namespace std;

class Map : public Figure {
private:
	
public:
	Map(string);
	~Map() {};
	void buildMap();
};