#include "td_enemy.h"

Enemy::Enemy(short spd, short h, string file_costume) {
	hp = cur_hp = h;
	speed = spd;
	setCostume(file_costume);

	path = new Coordinate[50];
	len_path = 50;
	for (int i = 0; i < len_path; i++) {
		Coordinate tmp;
		tmp.setCoordX(i);
		tmp.setCoordY(h);
		path[i] = tmp;
	}
}

Enemy::~Enemy() {
	delete[] path;
}

void Enemy::move() {
	ToolInGame t = ToolInGame();
	for (int i = 0; i < len_path; i++) {
		cur_coord = path[i];
		//cout << cur_coord.getCoordX() << " " << cur_coord.getCoordY() << "\n";
		t.draw(costume, cur_coord);
	}
}