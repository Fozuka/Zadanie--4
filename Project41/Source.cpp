#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int choice;
    cout << "������������ ������� ����� 4\n";
    cout << "�������� ����� ������� 1-5:";
    cin >> choice;
    switch (choice) {
    case 1:
    {
        int a, b;
        cout << "������� ������� �������������� a � b: ";
        cin >> a >> b;
        cout << "�������: " << a * b << endl << "��������: " << 2 * (a + b);
        break;
    }
    case 2:
    {
        int d;
        cout << "������� ������� ����������: ";
        cin >> d;
        cout << "����� ����������: " << d * 3.14;
        break;
    }
    case 3:
    {
        double a, b;
        double sr;
        cout << "������� ��� ����� a � b: ";
        cin >> a >> b;
        sr = (a + b) / 2;
        cout << "�� ������� ��������������: " << sr;
        break;
    }
    case 4:
    {
        double a, b;
        cout << "������� ��� ����� a � b: ";
        cin >> a >> b;
        cout << "����� �� ���������: " << (a * a + b * b) << endl << "�������� �� ���������: " << (a * a - b * b) << endl;
        cout << "������������ �� ���������: " << (a * a * b * b) << endl << "������� �� ���������: " << ((a * a) / (b * b));
        break; }
    case 5:
    {
        double a, b;
        cout << "������� ��� ����� a � b: ";
        cin >> a >> b;
        cout << "����� �� �������: " << (abs(a) + abs(b)) << endl << "�������� �� �������: " << (abs(a) - abs(b)) << endl;
        cout << "������������ �� �������: " << ((a)*abs(b)) << endl << "������� �� �������: " << (abs(a) / abs(b));
        break;
    }
    default:
        cout << "�������� ����";
        break;
    }

    return 0;
}

