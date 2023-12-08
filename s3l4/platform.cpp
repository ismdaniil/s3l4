#include "platform.h"

// �����������
Platform::Platform()
{
    angle = 0;
    height = 0;
}

// ����������� � ����� ����������
Platform::Platform(int height)
{
    angle = 0;
    this->height = height;
}

// ����������� � �����������
Platform::Platform(int angle, int height)
{
    this->angle = angle;
    this->height = height;
}

//��������� ����
void Platform::SetAngle(int angle) 
{
    this->angle = angle;
}
//��������� �����
void Platform::SetHeight(int height)
{
    this->height = height;
}

// ���-�� ��������� ������ �� �����
int Platform::GetAngle()
{
    return angle;
}

int Platform::GetHeight()
{
    return height;
}

// ���� 
void Platform::InpPlatformData()
{
    cout << "������� ���� ������� ���������: ";
    cin >> angle;
    cout << "������� ����� ���������: ";
    cin >> height;
}

// ����� 
void Platform::DisplayPlatform()
{
    cout << "������ ���������: \n  Angle = " << angle << "\n  Height = " << height << endl;

}

void Platform::RandRotatePlatform() {
    angle = rand() % 15;
}

// ����������
Platform::~Platform()
{
    ;
}

// ��������� Platform + int
Platform operator+(const Platform& platform, int angle)
{
    if (platform.angle + angle > 90)
        return platform;
    else
        return Platform(platform.angle + angle, platform.height);
}
// ���������� ����������� ��������� '++'
Platform& Platform::operator++()
{
    angle += 1;
    return *this;
}
// ���������� ������������ ��������� '++'
Platform Platform::operator++ (int)
{
    Platform m1 = *this;
    ++* this;
    return m1;
}
