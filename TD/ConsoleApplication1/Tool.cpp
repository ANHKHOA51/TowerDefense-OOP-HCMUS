#pragma once
#include "Tool.h"

Tool::Tool() {
	console_window = GetConsoleWindow();
	system_menu = GetSystemMenu(console_window, false);
	console_output = GetStdHandle(STD_OUTPUT_HANDLE);
	height_console_screen = 40;
	width_console_screen = 200;
}







