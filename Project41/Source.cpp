#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int choice;
    cout << "Практическое задание номер 4\n";
    cout << "Выберите номер задания 1-5:";
    cin >> choice;
    switch (choice) {
    case 1:
    {
        int a, b;
        cout << "Введите стороны прямоугольника a и b: ";
        cin >> a >> b;
        cout << "Площадь: " << a * b << endl << "Периметр: " << 2 * (a + b);
        break;
    }
    case 2:
    {
        int d;
        cout << "Введите диаметр окружности: ";
        cin >> d;
        cout << "Длина окружности: " << d * 3.14;
        break;
    }
    case 3:
    {
        double a, b;
        double sr;
        cout << "Введите два числа a и b: ";
        cin >> a >> b;
        sr = (a + b) / 2;
        cout << "Их среднее арифметическое: " << sr;
        break;
    }
    case 4:
    {
        double a, b;
        cout << "Введите два числа a и b: ";
        cin >> a >> b;
        cout << "Сумма их квадратов: " << (a * a + b * b) << endl << "Разность их квадратов: " << (a * a - b * b) << endl;
        cout << "Произведение их квадратов: " << (a * a * b * b) << endl << "Частное их квадратов: " << ((a * a) / (b * b));
        break; }
    case 5:
    {
        double a, b;
        cout << "Введите два числа a и b: ";
        cin >> a >> b;
        cout << "Сумма их модулей: " << (abs(a) + abs(b)) << endl << "Разность их модулей: " << (abs(a) - abs(b)) << endl;
        cout << "Произведение их модулей: " << ((a)*abs(b)) << endl << "Частное их модулей: " << (abs(a) / abs(b));
        break;
    }
    default:
        cout << "Неверный ввод";
        break;
    }

    return 0;
}

