// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include <iostream>
#include "ToolInGame.h"
#include "ToolConsole.h"
#include "Enemy.h"
#include "Map.h"
#include "Bullet.h"
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
    int s = 5;
    Bullet a(s, "bullet.txt");
    Bullet b(s, "bullet.txt");
    Bullet c(s, "bullet.txt");
    Bullet d(s, "bullet.txt");
    Bullet e(s, "bullet.txt");
    Bullet f(s, "bullet.txt");
    Bullet g(s, "bullet.txt");
    Bullet h(s, "bullet.txt");
    //b.setCurrentCoordinate(10, 10);
    //b.shootUP(30, 30, m);
    thread t1(&Bullet::shootUP, &a, 100, 20, ref(m));
    thread t2(&Bullet::shootTOP_RIGHT, &b, 100, 20, ref(m));
    thread t3(&Bullet::shootRIGHT, &c, 100, 20, ref(m));
    thread t4(&Bullet::shootDOWN_RIGHT, &d, 100, 20, ref(m));
    thread t5(&Bullet::shootDOWN, &e, 100, 20, ref(m));
    thread t6(&Bullet::shootDOWN_LEFT, &f, 100, 20, ref(m));
    thread t7(&Bullet::shootLEFT, &g, 100, 20, ref(m));
    thread t8(&Bullet::shootTOP_LEFT, &h, 100, 20, ref(m));
    /*b.shootTOP_RIGHT(30, 30, m);
    b.shootRIGHT(30, 30, m);
    b.shootDOWN_RIGHT(30, 30, m);
    b.shootDOWN(30, 30, m);
    b.shootDOWN_LEFT(30, 30, m);
    b.shootLEFT(30, 30, m);
    b.shootTOP_LEFT(30, 30, m);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();
    t8.join();
    cin.get();
    return 0;
*/
    return 0;
}