#pragma once
#include "td_figure.h"

class Enemy : public Figure{
private:
	short hp, cur_hp, speed, len_path;
	Coordinate* path;
public:
	Enemy(short, short, string);
	~Enemy();
	void move();
	
	void setHP(short);
	short getHP();
	void setCurrentHP(short);
	short getCurrentHP();
	void setSpeed(short);
	short getSpeed();
};