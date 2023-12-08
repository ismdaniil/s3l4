#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Coord
{
protected:
    int x = 0;        
    int y = 0;      

public:

    Coord();

    Coord(int x, int y);

    // ���������� �������
    void SetX(int x);

    // ���������� ���
    void SetY(int y);

    // ���-�� ��������� ������ �� �����
    int GetX();
    int GetY();

    // ���-�� ��������� ������ �� ����� ����� ������
    //void GetXLink(int& x);
    //void GetYLink(int& y);

    // ����������
    ~Coord();

    // ������������� ������ 
    void Set(int x, int y);

    // ���� 
    virtual void Inp() = 0;

    // ����  �� �����
    void Display();

    // ����������� ������� ������ ��������� �� �����, ��� �������� ������
    virtual string Who();

    // ������� ����������
    void MyLocation();

};

