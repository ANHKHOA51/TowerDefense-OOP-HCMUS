#pragma once
#include "Tool.h"

class ToolInGame : public Tool {
public:
	ToolInGame() : Tool() {}
	void setConsoleColor(int, int);
	void goToXY(int, int);
	void changeStateCusor(bool);
	void draw(Graphic&, Coordinate&);
	void erase(Graphic&, Coordinate&, Graphic&);

	short getKeyPress();
	void clearConsole();

	void setBGMusic();
	void changeStateBGMusic();
	void changeStateSoundEffect();
};