#pragma once
#include "ToolInGame.h"

inline static mutex mtx;
//===============================================================================================//
void ToolInGame::draw(Graphic& costume, Coordinate& coord) {

	short n_row = costume.getNumberOfRow();
	short n_col = costume.getNumberOfCol();
	short st_coord_x = coord.getCoordX();
	short st_coord_y = coord.getCoordY();
	for (short i = 0; i < n_row; i++) {
		for (short j = 0; j < n_col; j++) {
			if (st_coord_x + j < 0 || st_coord_x + j >= width_console_screen ||
				st_coord_y + i < 0 || st_coord_y + i >= height_console_screen)
				continue;
			mtx.lock();
			char color = costume.getPixel(i, j) - 'a';
			if (color >= 0 && color < 16) {
				goToXY(st_coord_x + j, st_coord_y + i);
				setConsoleColor(color, WHITE);
				cout << " ";
			}
			mtx.unlock();
		}
	}
	return;
}

void ToolInGame::erase(Graphic& costume, Coordinate& coord, Graphic& costume_map) {
	short n_row = costume.getNumberOfRow();
	short n_col = costume.getNumberOfCol();
	short st_coord_x = coord.getCoordX();
	short st_coord_y = coord.getCoordY();

	for (short i = 0; i < n_row; i++) {
		for (short j = 0; j < n_col; j++) {
			if (st_coord_x + j < 0 || st_coord_x + j >= width_console_screen ||
				st_coord_y + i < 0 || st_coord_y + i >= height_console_screen)
				continue;
			mtx.lock();
			char color = costume_map.getPixel(i + st_coord_y, j + st_coord_x) - 'a';
			if (color >= 0 && color < 16) {
				goToXY(st_coord_x + j, st_coord_y + i);
				setConsoleColor(color, BLACK);
				cout << " ";
			}
			mtx.unlock();
		}
	}
}

void ToolInGame::setConsoleColor(int background, int text)
{
	SetConsoleTextAttribute(console_output, background * 16 + text);
}

void ToolInGame::goToXY(int pX, int pY)
{
	SetConsoleCursorPosition(console_output, COORD{ (short)pX, (short)pY });
}

void ToolInGame::changeStateCusor(bool state)
{
	CONSOLE_CURSOR_INFO info = { 1, state };
	SetConsoleCursorInfo(console_output, &info);
}

short ToolInGame::getKeyPress() {
	int c = _getch(); // if arrow key is pressed then c = 224 (because it is not in ascii code)
	// Arrow key
	if (c == 0 || c == 224)
	{
		switch (_getch())
		{
		case KEY_UP:
			return 2;
		case KEY_LEFT:
			return 3;
		case KEY_RIGHT:
			return 4;
		case KEY_DOWN:
			return 5;
		default:
			return 0;
		}
	}
	else
	{
		if (c == KEY_ESC) // Esc
			return 1;
		else if (c == 87 || c == 119) // W, w
			return 2;
		else if (c == 65 || c == 97) // A, a
			return 3;
		else if (c == 68 || c == 100) // D, d
			return 4;
		else if (c == 83 || c == 115) // S, s
			return 5;
		else if (c == 13) // Enter
			return 6;
		else if (c == 72 || c == 104) // H, h
			return 7;
		else if (c == 77 || c == 109) // M, m
			return 8;
		else if (c == 32) // Space
			return 9;
		else
			return 0; // others
	}
}

void ToolInGame::clearConsole() {
	system("cls");
}