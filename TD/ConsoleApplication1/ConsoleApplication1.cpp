// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include <iostream>
#include "td_tool.h"
#include "td_enemy.h"
#include "td_map.h"
#include <thread>
#include <mutex>

using namespace std;

int main()
{
    //pre processing
    ToolConsole _tool1;
    ToolInGame _tool2;
    _tool1.setUpConsoleScreen();
    _tool2.changeStateCusor(0);
    
    Map m("map.txt");
    m.buildMap();
    

    // demo 2 enemies
    Enemy boss1(5, 0, "enemy.txt");
    //boss1.move(m);
    thread t1(&Enemy::move, &boss1, ref(m));
    Enemy boss2(5, 6, "enemy.txt");
    Sleep(5000);
    thread t2(&Enemy::move, &boss2, ref(m));

    t1.join();
    t2.join();
    /*
    //boss1.move(m);
    thread t1(&Enemy::move, &boss1, ref(m));
    Enemy boss2(5, 6, "enemy.txt");
    thread t2(&Enemy::move, &boss2, ref(m));
    Enemy boss3(5, 12, "enemy.txt");
    thread t3(&Enemy::move, &boss3, ref(m));

    
    t3.join();
    */
    cin.get();
    return 0;

    return 0;
}