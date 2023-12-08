#include "Rating.h"

// �����������
Rating::Rating()
{
    points = 0;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = C;
}

Rating::Rating(int points)
{
    this->points = 0;
    if (IsRightRating(points))
        this->points = points;

    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = C;
}

Rating::Rating(int pointsi, Coin array[5])
{
    this->points = 0;
    if (IsRightRating(pointsi))
        this->points = pointsi;
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = array[i];
}

void Rating::SetPoint(int pointsi)
{
    this->points = 0;
    if (IsRightRating(pointsi))
        this->points = pointsi;
}

void Rating::SetCoinArray(Coin array[5])
{
    Coin C;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i] = array[i];
}

// ���-�� ��������� ������ �� �����
int Rating::GetPoints()
{
    return points;
}

// ����� 
void Rating::DisplayRating()
{
    cout << "������� = " << points << endl;
    cout << "������: \n" << endl;
    for (int i = 0; i < 5; i++)
        ArrayCoins[i].DisplayCoin();

}

// ���������� �������� �������� �� 1
void Rating::PlusRating() {
    points++;
    if (IsRightRating(points))
        this->points = points;
    else
        points--;
}

// ����������
Rating::~Rating()
{
    ;
}

// �������� ����� �� ����������
bool Rating::IsRightRating(int Rating)
{
    bool res = true;
    try                                     // ���� ���������� ������ ����� ����� � ���������� �� � ��������������� ���������� catch
    {
        if (Rating < 0 || Rating > 15)           // ���� ������������ ���� �������� �����, �� ������������� ����������
            throw "Incorrect value.";       // ������������� ���������� ���� const char*
    }
    catch (const char* exception)           // ���������� ���������� ���� const char*
    {
        std::cerr << "Error: " << exception << '\n';
        res = false;
        return res;
    }

    return res;
}
