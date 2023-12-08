#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

#include "ball.h"
#include "Coord.h"


using namespace std;

class Coin : public Coord
{
private:
    //int x = 0;
    //int y = 0;
public:
    // �����������
    Coin();
    Coin(int x);
    Coin(int x, int y);

    /*
    void SetX(int x); 
    void SetY(int y);

    // ���-�� ��������� ������ �� �����
    int GetX();
    int GetY();
    */
    // ����������
    ~Coin();

    // ������������� ��������� 
    void SetCoin(int x, int y);

    // ���� 
    //void InpCoinData();

    // �����  �� �����
    void DisplayCoin();

    //��������� ����� �������� ������ (����� ��������� � �)
    void RandXYCoin();

    // ������������� ������� ������ ����������� ������� Ball � Coin
    friend void KoordExchange(Ball& ball, Coin& Coin);

    // ����������� ������� ������ ��������� �� �����, ��� �������� ������
    string Who();
};
