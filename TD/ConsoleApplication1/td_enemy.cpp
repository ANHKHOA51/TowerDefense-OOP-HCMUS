#include "td_enemy.h"

Enemy::Enemy(short spd, short h, string file_costume) {
	hp = cur_hp = h;
	speed = spd;
	setCostume(file_costume);
	setCurrentCoordinate(0, 0);
}

Enemy::~Enemy() {
	//delete[] path;
}

void Enemy::move(Map & m) {
	ToolInGame t = ToolInGame();
	Graphic & costume_map = m.getCostume();
	short len_path = m.getLengthOfMap();
	for (int i = 0; i < len_path; i++) {
		cur_coord = m.getCoordinateOfPath(i);//path[i];
		t.draw(costume, cur_coord);
		Sleep(500);
		t.erase(costume, cur_coord, costume_map);
	}
}

short Enemy::getCurrentHP() {
	return cur_hp;
}

void Enemy::setCurrentHP(short src) {
	cur_hp = src;
}

short Enemy::getHP() {
	return hp;
}

void Enemy::setHP(short src) {
	hp = src;
}

short Enemy::getSpeed() {
	return speed;
}

void Enemy::setSpeed(short src) {
	speed = src;
}
