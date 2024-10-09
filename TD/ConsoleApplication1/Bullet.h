#pragma once

#include "Figure.h"
#include "Map.h"

class Bullet : public Figure {
private:
	int speed;

public:
	Bullet();

	Bullet(int, string);

	int getSpeed();

	void setSpeed(int);

	void shootUP(short, short, Map &);

	void shootDOWN(short, short, Map &);

	void shootLEFT(short, short, Map &);
			
	void shootRIGHT(short, short, Map &);

	void shootTOP_LEFT(short, short, Map &);

	void shootTOP_RIGHT(short, short, Map &);

	void shootDOWN_LEFT(short, short, Map &);

	void shootDOWN_RIGHT(short, short, Map &);
};

