#include "td_coordinate.h"

short Coordinate::getCoordX() {
	return coord_x;
}

short Coordinate::getCoordY() {
	return coord_y;
}

void Coordinate::setCoordX(const short & x) {
	coord_x = x;
}

void Coordinate::setCoordY(const short & y) {
	coord_y = y;
}