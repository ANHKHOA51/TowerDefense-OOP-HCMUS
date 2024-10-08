#pragma once
#include <Windows.h>
#include <conio.h>
#include <mutex>
#include <fstream>
#include <string>
#include <iostream>
#include "Graphic.h"
#include "Coordinate.h"

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

class Tool {
protected:
	HWND console_window;
	HMENU system_menu;
	HANDLE console_output; 
	short width_console_screen, height_console_screen;
public:
	Tool();
};
