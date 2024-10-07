#pragma once

#include "td_figure.h"
#include "td_map.h"

class Bullet : public Figure {
private:
	int speed;

public:
	Bullet() {
		speed = 0;
	}

	Bullet(int speed, string file_name) {
		setCostume(file_name);
		this->speed = speed;
	}

	int getSpeed() {
		return speed;
	}

	void setSpeed(int speed) {
		this->speed = speed;
	}

	void shootUP(short startX, short startY, Map& m) {
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

	void shootDOWN(short startX, short startY, Map& m) {
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

	void shootLEFT(short startX, short startY, Map& m) {
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

	void shootRIGHT(short startX, short startY, Map& m) {
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

	void shootTOP_LEFT(short startX, short startY, Map& m) {
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

	void shootTOP_RIGHT(short startX, short startY, Map& m) {
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

	void shootDOWN_LEFT(short startX, short startY, Map& m) {
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

	void shootDOWN_RIGHT(short startX, short startY, Map& m) {
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

};

