#include "button.h"

// �����������
Button::Button()
{
    OnOff = 0;
}

// �����������
Button::Button(bool OnOff)
{
    this->OnOff = OnOff;
}

//��������� �������� 
void Button::SetButton(bool onoffi)
{
    this->OnOff = onoffi;
}

// ���-�� ��������� ������ �� �����
int Button::GetOnOff()
{
    return OnOff;
}

// ����� 
void Button::DisplayButton()
{
    if (OnOff)
        cout << "������ ������ " << endl;
    else
        cout << "������ �� ������ " << endl;
}

void Button::PressButton() {
    if (OnOff)
        OnOff = 0;
    else
        OnOff = 1;
}

// ����������
Button::~Button()
{
    ;
}

// ���������� �������� � ����� ������
void Button::Add(void)
{
    if (lastButton == NULL)
        this->prev = NULL;
    else
    {
        lastButton->next = this;
        prev = lastButton;
    }
    lastButton = this;
    this->next = NULL;
}

// ����� �� ������� ����������� ������
void Button::reprint(void)
{
    Button* uk;   // ��������������� ���������
    uk = lastButton;
    if (uk == NULL)
    {
        cout << "������ ����!";
        return;
    }
    else
        cout << "\n���������� ������:\n";

    // ���� ������ � �������� ������� �������� ��������� ������:
    while (uk != NULL)
    {
        cout << uk->OnOff << '\t';
        uk = uk->prev;
    }
}

