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

void Enemy::move(Map & m) {
	ToolInGame t = ToolInGame();
	Graphic & costume_map = m.getCostume();
	Coordinate coord_map = m.getCurrentCoordinate();
	for (int i = 0; i < len_path; i++) {
		cur_coord = path[i];
		//cout << cur_coord.getCoordX() << " " << cur_coord.getCoordY() << "\n";
		t.draw(costume, cur_coord);
		Sleep(200);
		t.erase(costume, cur_coord, costume_map);
		//t.draw(costume_map, coord_map);
	}
}