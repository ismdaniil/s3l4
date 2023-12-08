#include "coin.h"

// �����������
Coin::Coin()
{
    x = 0;
    y = 0;
}

Coin::Coin(int x)
{
    this->x = x;
    y = 0;
}

Coin::Coin(int x, int y)
{
    this->x = x;
    this->y = y;
}

/*
void Coin::SetX(int x) {
    this->x = x;
}
void Coin::SetY(int y) {
    this->y = y;
}
// ���-�� ��������� ������ �� �����
int Coin::GetX()
{
    return x;
}

int Coin::GetY()
{
    return y;
}
// ����
void Coin::InpCoinData()
{
    cout << "������� x-���������� ����: ";
    cin >> x;
    cout << "������� y-���������� ����: ";
    cin >> y;
}
*/

void Coin::SetCoin(int x, int y) {
    this->x = x;
    this->y = y;
}


// ����� 
void Coin::DisplayCoin()
{
    cout << "������ ������: \n  x = " << x << "\n  y = " << y << endl;
}

//��������� �������� ���������
void Coin::RandXYCoin() {
    x = rand() % 7;
    y = rand() % 7;
}

// ����������
Coin::~Coin()
{
    ;
}

// ������������� ������� ������ ����������� ������� Ball � Coin
void KoordExchange(Ball& ball, Coin& coin)
{
    int x, y;
    x = ball.x;
    ball.x = coin.x;
    coin.x = x;
    y = ball.y;
    ball.y = coin.y;
    coin.y = y;
}

string Coin::Who()
{
    return "������ ";
}

