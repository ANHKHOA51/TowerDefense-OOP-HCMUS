#pragma once
#include "td_map.h"

Map::Map(string file_costume) {
	setCostume(file_costume);
	cur_coord.setCoordX(0);
	cur_coord.setCoordY(0);
	ifstream fi("path.txt");
	fi >> len_path;
	path_enemy = new Coordinate[len_path];
	for (int i = 0; i < len_path; i++) {
		int x, y;
		fi >> x >> y;
		Coordinate tmp;
		tmp.setCoordX(x);
		tmp.setCoordY(y);
		path_enemy[i] = tmp;
	}
	fi.close();
	coord_main_tower = path_enemy[len_path - 1];
}

Map::~Map() {
	delete[] path_enemy;
	path_enemy = nullptr;
}

void Map::buildMap() {
	ToolInGame t;
	t.draw(costume, cur_coord);
}

Coordinate Map::getCoordinateOfPath(short index) {
	return path_enemy[index];
}

short Map::getLengthOfMap() {
	return len_path;
}