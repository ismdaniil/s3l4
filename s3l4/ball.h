#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>
#include "Coord.h"


using namespace std;

class Coin;

class Ball : public Coord
{
private:
    string Name = "";
public:
    // �����������
    Ball();
    Ball(string name);
    Ball(int x, int y, string name);

    //void SetX(int x);
    //void SetY(int y);
    void SetName(string name);

    // ���-�� ��������� ������ �� �����
    //void GetX(int* xi);
    //void GetY(int* yi);
    void GetNameLink(string& name);

    // ����������
    ~Ball();

    // ������������� ��������� 
    //void SetBall(int x, int y, string Name);

    // ���� 
    virtual void Inp();

    // �����  �� �����
    void DisplayBall();

    //������� ���
    void MoveBall();

    // ������������� ������� ������ ����������� ������� Ball � Coin
    friend void KoordExchange(Ball& ball, Coin& Coin);

    // ����������� ������� ������ ��������� �� �����, ��� �������� ������
    string Who();

    //���������� ��������� ������������ 
    Ball& operator=(Coord& xy);

    // ���������� �������� ��������� <<
    friend std::ostream& operator<< (std::ostream& out, const Ball& ball);
};

