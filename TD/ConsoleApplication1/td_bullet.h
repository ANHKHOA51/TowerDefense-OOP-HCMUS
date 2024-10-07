#pragma once

#include "td_figure.h"
#include "td_map.h"

class Bullet : public Figure
{
private:
	int speed;

public:
	Bullet();

	Bullet(int speed, string file_name) {
		setCostume(file_name);
		this->speed = speed;
	}

	void shootUP(short startX, short startY, Map& m) {
		setCurrentCoordinate(startX, startY);
		Graphic& costume_map = m.getCostume();

		while (cur_coord.getCoordX() > 0 && cur_coord.getCoordX() < 200 && cur_coord.getCoordY() > 0 && cur_coord.getCoordY() < 40) {
			ToolInGame t = ToolInGame();

			t.draw(costume, cur_coord);
			Sleep(speed * 100);
			t.erase(costume, cur_coord, costume_map);
			startY--;

			setCurrentCoordinate(startX, startY);

		}
	}
	
};

