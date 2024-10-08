#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Graphic {
private:
	char** pixel;
	int n_row, n_col;

public:
	Graphic();
	~Graphic();
	void setPixel(string);
	char getPixel(short , short);
	void setNumberOfRow(short);
	short getNumberOfRow();
	void setNumberOfCol(short);
	short getNumberOfCol();
};