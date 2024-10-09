#pragma once
#include "Bullet.h"
#include "Figure.h"
#include "Map.h"
Bullet::Bullet() {
	speed = 0;
}

Bullet::Bullet(int speed, string file_name) {
	setCostume(file_name);
	this->speed = speed;
}

int Bullet::getSpeed() {
	return speed;
}

void Bullet::setSpeed(int speed) {
	this->speed = speed;
}

void Bullet::shootUP(short startX, short startY, Map& m) {
	setCurrentCoordinate(startX, startY);
	Graphic& costume_map = m.getCostume();
	ToolInGame t = ToolInGame();

	if (speed == 0) {
		t.draw(costume, cur_coord);
		Sleep(1000);
		t.erase(costume, cur_coord, costume_map);
	}
	else {
		while (cur_coord.getCoordY() > 0) {
			t.draw(costume, cur_coord);
			Sleep(1000 / speed);
			t.erase(costume, cur_coord, costume_map);

			startY--;

			setCurrentCoordinate(startX, startY);

		}
	}

}

void Bullet::shootDOWN(short startX, short startY, Map& m) {
	setCurrentCoordinate(startX, startY);
	Graphic& costume_map = m.getCostume();
	ToolInGame t = ToolInGame();

	if (speed == 0) {
		t.draw(costume, cur_coord);
		Sleep(1000);
		t.erase(costume, cur_coord, costume_map);
	}
	else {
		while (cur_coord.getCoordY() < 40) {
			t.draw(costume, cur_coord);
			Sleep(1000 / speed);
			t.erase(costume, cur_coord, costume_map);

			startY++;

			setCurrentCoordinate(startX, startY);

		}
	}

}

void Bullet::shootLEFT(short startX, short startY, Map& m) {
	setCurrentCoordinate(startX, startY);
	Graphic& costume_map = m.getCostume();
	ToolInGame t = ToolInGame();

	if (speed == 0) {
		t.draw(costume, cur_coord);
		Sleep(1000);
		t.erase(costume, cur_coord, costume_map);
	}
	else {
		while (cur_coord.getCoordX() > 0) {
			t.draw(costume, cur_coord);
			Sleep(1000 / speed);
			t.erase(costume, cur_coord, costume_map);

			startX--;

			setCurrentCoordinate(startX, startY);

		}
	}

}

void Bullet::shootRIGHT(short startX, short startY, Map& m) {
	setCurrentCoordinate(startX, startY);
	Graphic& costume_map = m.getCostume();
	ToolInGame t = ToolInGame();

	if (speed == 0) {
		t.draw(costume, cur_coord);
		Sleep(1000);
		t.erase(costume, cur_coord, costume_map);
	}
	else {
		while (cur_coord.getCoordX() < 200) {
			t.draw(costume, cur_coord);
			Sleep(1000 / speed);
			t.erase(costume, cur_coord, costume_map);

			startX++;

			setCurrentCoordinate(startX, startY);

		}
	}

}

void Bullet::shootTOP_LEFT(short startX, short startY, Map& m) {
	setCurrentCoordinate(startX, startY);
	Graphic& costume_map = m.getCostume();
	ToolInGame t = ToolInGame();

	if (speed == 0) {
		t.draw(costume, cur_coord);
		Sleep(1000);
		t.erase(costume, cur_coord, costume_map);
	}
	else {
		while (cur_coord.getCoordX() > 0 && cur_coord.getCoordY() > 0) {
			t.draw(costume, cur_coord);
			Sleep(1000 / speed);
			t.erase(costume, cur_coord, costume_map);

			startX -= 2;
			startY--;

			setCurrentCoordinate(startX, startY);

		}
	}

}

void Bullet::shootTOP_RIGHT(short startX, short startY, Map& m) {
	setCurrentCoordinate(startX, startY);
	Graphic& costume_map = m.getCostume();
	ToolInGame t = ToolInGame();

	if (speed == 0) {
		t.draw(costume, cur_coord);
		Sleep(1000);
		t.erase(costume, cur_coord, costume_map);
	}
	else {
		while (cur_coord.getCoordX() < 200 && cur_coord.getCoordY() > 0) {
			t.draw(costume, cur_coord);
			Sleep(1000 / speed);
			t.erase(costume, cur_coord, costume_map);

			startX += 2;
			startY--;

			setCurrentCoordinate(startX, startY);

		}
	}

}

void Bullet::shootDOWN_LEFT(short startX, short startY, Map& m) {
	setCurrentCoordinate(startX, startY);
	Graphic& costume_map = m.getCostume();
	ToolInGame t = ToolInGame();

	if (speed == 0) {
		t.draw(costume, cur_coord);
		Sleep(1000);
		t.erase(costume, cur_coord, costume_map);
	}
	else {
		while (cur_coord.getCoordX() > 0 && cur_coord.getCoordY() < 40) {
			t.draw(costume, cur_coord);
			Sleep(1000 / speed);
			t.erase(costume, cur_coord, costume_map);

			startX -= 2;
			startY++;

			setCurrentCoordinate(startX, startY);

		}
	}

}

void Bullet::shootDOWN_RIGHT(short startX, short startY, Map& m) {
	setCurrentCoordinate(startX, startY);
	Graphic& costume_map = m.getCostume();
	ToolInGame t = ToolInGame();

	if (speed == 0) {
		t.draw(costume, cur_coord);
		Sleep(1000);
		t.erase(costume, cur_coord, costume_map);
	}
	else {
		while (cur_coord.getCoordX() < 200 && cur_coord.getCoordY() < 40) {
			t.draw(costume, cur_coord);
			Sleep(1000 / speed);
			t.erase(costume, cur_coord, costume_map);

			startX += 2;
			startY++;

			setCurrentCoordinate(startX, startY);

		}
	}

}