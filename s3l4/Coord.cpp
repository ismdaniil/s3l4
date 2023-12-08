#include "Coord.h"

// �����������
Coord::Coord()
{
    x = 0;
    y = 0;
}

Coord::Coord(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Coord::SetX(int x) {
    this->x = x;
}
void Coord::SetY(int y) {
    this->y = y;
}

void Coord::Set(int x, int y) {
    this->x = x;
    this->y = y;
}


// ���-�� ��������� ������ �� �����
int Coord::GetX()
{
    return x;
}

int Coord::GetY()
{
    return y;
}

// ���� ���������
void Coord::Inp()
{
    cout << "������� x-���������y: ";
    cin >> x;
    cout << "������� y-����������: ";
    cin >> y;
}

// ����� 
void Coord::Display()
{
    cout << "������ �����: \n  x = " << x << "\n  y = " << y << endl;
}

// ����������
Coord::~Coord()
{
    ;
}

// �����������/�� ����������� ������� ������ ��������� �� �����, ��� �������� ������
string Coord::Who()
{
    return "����� � ������������ ";
}

// ������� ����������
void Coord::MyLocation()
{
    cout << Who() << "������������: � = "<< x << " y = " << y << endl;
}


