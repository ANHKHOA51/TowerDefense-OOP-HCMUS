// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

#include <iostream>
#include "td_tool.h"
#include "td_enemy.h"
#include "td_map.h"
#include "td_bullet.h"
#include <thread>
#include <mutex>

using namespace std;

//mutex mtx;
/*
int n1 = 0, n2 = 0;
void thread1(int y) {
    ToolInGame t1;
    t1.setConsoleColor(YELLOW, BLACK);
    int pX1 = 3, pY1 = y;
    //t1.goToXY(pX1, pY1);

    for (int k1 = 0; k1 < 20; k1++) {
        for (int i1 = 0; i1 < 3; i1++) {
            for (int j1 = 0; j1 < 3; j1++) {
                mtx.lock();
                t1.goToXY(pX1 + j1, pY1 + i1);
                t1.setConsoleColor(YELLOW, BLACK);
                cout << " ";
                mtx.unlock();
            }
        }
        Sleep(200);
        for (int i1 = 0; i1 < 3; i1++) {
            for (int j1 = 0; j1 < 3; j1++) {
                mtx.lock();
                t1.goToXY(pX1 + j1, pY1 + i1);
                t1.setConsoleColor(BLUE, BLACK);
                cout << " ";
                mtx.unlock();
            }
        }
        pX1 += 3;
    }
}

void thread2(int y) {
    ToolInGame t2;
    t2.setConsoleColor(YELLOW, BLACK);
    int pX2 = 3, pY2 = y;
    //t2.goToXY(pX2, pY2);

    for (int k2 = 0; k2 < 20; k2++) {
        for (int i2 = 0; i2 < 3; i2++) {
            for (int j2 = 0; j2 < 3; j2++) {
                mtx.lock();
                t2.goToXY(pX2 + j2, pY2 + i2);
                t2.setConsoleColor(YELLOW, BLACK);
                cout << " ";
                mtx.unlock();
            }
        }
        Sleep(200);
        for (int i2 = 0; i2 < 3; i2++) {
            for (int j2 = 0; j2 < 3; j2++) {
                mtx.lock();
                t2.goToXY(pX2 + j2, pY2 + i2);
                t2.setConsoleColor(BLUE, BLACK);
                cout << " ";
                mtx.unlock();
            }
        }
        pX2 += 3;
    }
}
*/

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
    //Enemy boss1(5, 0, "enemy.txt");
    ////boss1.move(m);
    //thread t1(&Enemy::move, &boss1, ref(m));
    //Enemy boss2(5, 6, "enemy.txt");
    //thread t2(&Enemy::move, &boss2, ref(m));
    //Enemy boss3(5, 12, "enemy.txt");
    //thread t3(&Enemy::move, &boss3, ref(m));

    /*
    Enemy boss4(5, 18, "enemy.txt");
    thread t4(&Enemy::move, &boss4);
    Enemy boss5(5, 24, "enemy.txt");
    thread t5(&Enemy::move, &boss5);
    Enemy boss6(5, 30, "enemy.txt");
    thread t6(&Enemy::move, &boss6);
    */
    /*t1.join();
    t2.join();
    t3.join();*/
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
    b.shootTOP_LEFT(30, 30, m);*/
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


    /** demo 2 object move *
    _tool2.setConsoleColor(BLUE, BLACK);
    for (int i = 0; i < 40; i++) {
        for (int j = 0; j < 200; j++)
            cout << " ";
        cout << endl;
    }
    Sleep(1000);

    thread t1(thread1, 10);
    thread t2(thread2, 15);

    t1.join();
    t2.join();
    /**/
    

    return 0;
}