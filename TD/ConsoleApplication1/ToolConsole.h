#pragma once
#include "Tool.h"

class ToolConsole : public Tool {
public:
	ToolConsole() : Tool() {}
	void setMaximumWindow();
	void disableResizeWindow();
	void disableCtrButton(bool, bool, bool);
	void setWindowSize(SHORT, SHORT);
	void setScreenBufferSize();
	void hideScrollBar();
	void setUpConsoleScreen();
};