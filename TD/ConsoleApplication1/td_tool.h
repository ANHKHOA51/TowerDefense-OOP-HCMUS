#pragma once
#include <Windows.h>
#include <conio.h>
#include <mutex>
#include <fstream>
#include <string>
#include <iostream>
#include "td_graphic.h"
#include "td_coordinate.h"

using namespace std;

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define AQUA 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define WHITE 7
#define GRAY 8
#define LIGHT_BLUE 9
#define LIGHT_GREEN 10
#define LIGHT_AQUA 11
#define LIGHT_RED 12
#define LIGHT_PURPLE 13
#define LIGHT_YELLOW 14
#define BRIGHT_WHITE 15

// MOVEMENT
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ESC 27

static mutex mtx;

class Tool {
protected:
	HWND console_window;
	HMENU system_menu;
	HANDLE console_output;
public:
	//mutex mtx;
	Tool();
};

class ToolConsole : public Tool {
public:
	ToolConsole() : Tool() {}
	void setMaximumWindow();
	void disableResizeWindow();
	void disableCtrButton(bool , bool, bool);
	void setWindowSize(SHORT, SHORT);
	void setScreenBufferSize();
	void hideScrollBar();
	void setUpConsoleScreen();
};

class ToolInGame : public Tool {
public:
	ToolInGame() : Tool() {}
	void setConsoleColor(int , int);
	void goToXY(int, int);
	void changeStateCusor(bool);
	void draw(Graphic &, Coordinate &);
	void erase(Graphic &, Coordinate &, Graphic &);

	short getKeyPress();
	void clearConsole();

	void setBGMusic();
	void changeStateBGMusic();
	void changeStateSoundEffect();
};
