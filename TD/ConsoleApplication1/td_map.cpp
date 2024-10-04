#pragma once
#include "td_map.h"

Map::Map(string file_costume) {
	setCostume(file_costume);
	cur_coord.setCoordX(0);
	cur_coord.setCoordY(0);
}

void Map::buildMap() {
	ToolInGame t;
	t.draw(costume, cur_coord);
}