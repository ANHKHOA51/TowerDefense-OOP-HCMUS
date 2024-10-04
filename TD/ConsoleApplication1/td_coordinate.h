#pragma once

class Coordinate {
private:
	short coord_x, coord_y;

public:
	void setCoordX(const short &);
	void setCoordY(const short &);
	short getCoordX();
	short getCoordY();
};