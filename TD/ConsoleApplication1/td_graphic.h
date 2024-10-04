#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Graphic {
private:
	string *pixel;
	int n_row, n_col;

public:
	Graphic() {
		n_row = n_col = 0;
		pixel = NULL;
	};
	~Graphic();
	void setPixel(string);
	char getPixel(short , short);
	void setNumberOfRow(short);
	short getNumberOfRow();
	void setNumberOfCol(short);
	short getNumberOfCol();
};