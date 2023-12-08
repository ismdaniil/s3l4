#include "Ball.h"

// ������������
Ball::Ball()
{
    this->x = 0;
    this->y = 0;
    this->Name = "";

    x = 0;
}
Ball::Ball(string name)
{
    x = 0;
    y = 0;
    this->Name = name;
}
//����������� � ����������� 
Ball::Ball(int x, int y, string name): Coord(x,y)
{
    this->Name = name;
}

/*
//����������� ��������
void Ball::SetX(int x) 
{
    this->x = x;
}

void Ball::SetY(int y)
{
    this->y = y;
}
*/

void Ball::SetName(string name)
{
    this->Name = name;
}

/*
// ���-�� ��������� ������ �� �����
void Ball::GetX(int* xi)
{
    *xi = x;
}

void Ball::GetY(int* yi)
{
    *yi = y;
}
*/

void Ball::GetNameLink(string& name)
{
    name = this->Name;
}

// ���� 
void Ball::Inp()
{
    Coord::Inp();
    cout << "������� ��� ����: ";
    cin >> Name;
}

// ����� 
void Ball::DisplayBall()
{
    cout << "������ ����: \n  x = " << x << "\n  y = " << y << "\n  Name -  " << Name << endl;

}

void Ball::MoveBall() {
    cout << "Press \n  'D' to increase the x value \n  'A' to decrease the x value\n  'W' to increase the y value\n  'S' to decrease the y value\n" << endl;
    char key = _getch();
    if (key == 'a')
        x--;
    if (key == 'd')
        x++;
    if (key == 'w')
        y++;
    if (key == 's')
        y--;
}

// ����������
Ball::~Ball()
{
    ;
}

// ����������� ������� ������ ��������� �� �����, ��� �������� ������
string Ball::Who()
{
    return "��� ";
}

//���������� ��������� ������������ 
Ball& Ball::operator=(Coord& xy) 
{
    this->x = xy.GetX();
    this->y = xy.GetY();

    return *this;
}

// ���������� �������� ��������� <<
std::ostream& operator<< (std::ostream& out, const Ball& ball) 
{
    out << "������ ����: \n  x = " << ball.x << "\n  y = " << ball.y << "\n  Name -  " << ball.Name << endl;

    return out;
}

