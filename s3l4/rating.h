#pragma once

#include "Coin.h"

class Rating
{
private:
    int points;
    Coin ArrayCoins[5];

public:
    // �����������
    Rating();
    Rating(int points);
    Rating(int pointsi, Coin array[5]);

    // ���-�� ��������� ������ �� �����
    int GetPoints();

    // ����������
    ~Rating();

    void SetPoint(int pointsi);
    void SetCoinArray(Coin array[5]);

    // �����  �� �����
    void DisplayRating();

    //��������� �������
    void PlusRating();

    // �������� ����� �� ���������� ��� ��������
    bool IsRightRating(int Rating);
};
