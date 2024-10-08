#pragma once
#include "Figure.h"
#include "Map.h"
#include "ToolInGame.h"

class Enemy : public Figure{
private:
	short hp, cur_hp, speed;
public:
	Enemy(short, short, string);
	~Enemy();
	void move(Map &);
	
	void setHP(short);
	short getHP();
	void setCurrentHP(short);
	short getCurrentHP();
	void setSpeed(short);
	short getSpeed();
};