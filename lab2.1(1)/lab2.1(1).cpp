// Lab_02.cpp
// < ���� ������� �������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 1


#include <iostream>
#include <cmath>
using namespace std;

double M_PI = 3.14;

int main()
{
    double x;  // ������� ��������
    double z1; // ��������� ���������� 1-�� ������
    double z2; // ��������� ���������� 2-�� ������

    cout << "x = "; cin >> x;

    z1 = 2 * pow(sin(3 * M_PI - 2 * x), 2) * pow(cos(5 * M_PI + 2 * x), 2);
    z2 = 0.25 - 0.25 * sin((5.0 / 2) * M_PI - 8 * x);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}
