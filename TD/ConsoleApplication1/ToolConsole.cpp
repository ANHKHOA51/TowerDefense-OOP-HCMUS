#pragma once
#include "ToolConsole.h"

//===============================================================================================//
void ToolConsole::disableCtrButton(bool Close, bool Min, bool Max) {

    if (Close == 1)
    {
        DeleteMenu(system_menu, SC_CLOSE, MF_BYCOMMAND);
    }
    if (Min == 1)
    {
        DeleteMenu(system_menu, SC_MINIMIZE, MF_BYCOMMAND);
    }
    if (Max == 1)
    {
        DeleteMenu(system_menu, SC_MAXIMIZE, MF_BYCOMMAND);
    }
}

void ToolConsole::hideScrollBar()
{
    ShowScrollBar(console_window, SB_BOTH, false);
}

void ToolConsole::setMaximumWindow() {
    ShowWindow(console_window, SW_MAXIMIZE);
}

void ToolConsole::setWindowSize(SHORT width, SHORT height)
{
    /*
    SMALL_RECT WindowSize;
    WindowSize.Top = 0;
    WindowSize.Left = 0;
    WindowSize.Right = width;
    WindowSize.Bottom = height;

    SetConsoleWindowInfo(console_output, 1, &WindowSize);
    */
    RECT r;
    GetWindowRect(console_window, &r); //stores the console's current dimensions

    MoveWindow(console_window, 0, 0, width, height, TRUE); // 800 width, 100 height
}

void ToolConsole::setScreenBufferSize()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    SHORT columns, rows;

    GetConsoleScreenBufferInfo(console_output, &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

    COORD NewSize;
    NewSize.X = columns;
    NewSize.Y = rows;

    SetConsoleScreenBufferSize(console_output, NewSize);
}

void ToolConsole::disableResizeWindow()
{
    SetWindowLong(console_window, GWL_STYLE, GetWindowLong(console_window, GWL_STYLE) & ~WS_SIZEBOX);
}

void ToolConsole::setUpConsoleScreen() {
    disableCtrButton(0, 1, 1);
    setWindowSize(1500, 700);
    setScreenBufferSize();
    disableResizeWindow();
    //hideScrollBar();
}
