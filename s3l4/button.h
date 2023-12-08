#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;

class Button
{
private:
    bool OnOff; //���� ������� ���������

    static Button* lastButton;
    Button* prev;
    Button* next;
public:
    // �����������
    Button();

    // �����������
    Button(bool OnOff);

    // ���-�� ��������� ������ �� �����
    int GetOnOff();

    // ����������
    ~Button();

    // ������������� ��������� 
    void SetButton(bool onofi);

    // �����  �� �����
    void DisplayButton();

    void Add(void);
    static void reprint(void);

    //������ �� ������
    void PressButton();
};
