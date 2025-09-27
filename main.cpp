#include <iostream>
#include <iomanip> // для setprecision
using namespace std;

/*
Задача Begin29
Вхідні дані:
  A, B – дійсні числа (A ≠ 0).
Вихідні дані:
  x – розв'язок рівняння Ax + B = 0.
Алгоритм:
  1) Вивести запрошення до вводу A, B.
  2) Прочитати A, B.
  3) Якщо A ≠ 0, обчислити x = -B / A.
  4) Вивести x з поясненням.

Задача Begin11
Вхідні дані:
  L – довжина кола (дійсне число, L > 0).
Вихідні дані:
  R – радіус кола,
  S – площа круга.
Алгоритм:
  1) Запросити L.
  2) Прочитати L.
  3) Обчислити R = L / (2 * π).
  4) Обчислити S = π * R^2.
  5) Вивести R та S.

Задача Begin41
Вхідні дані:
  a, b – основи трапеції (дійсні числа, >0),
  h – висота трапеції (дійсне число, >0).
Вихідні дані:
  area – площа трапеції.
Алгоритм:
  1) Запросити a, b, h.
  2) Прочитати a, b, h.
  3) Обчислити area = (a + b) / 2 * h.
  4) Вивести area.
*/

int main()
{
    const double PI = 3.1415926535;

    // ===== Begin29 =====
    cout << "===== Begin29 =====\n";
    double A, B;
    cout << "Введiть коефiцiєнт A (A ≠ 0): ";
    cin >> A;
    cout << "Введiть коефiцiєнт B: ";
    cin >> B;

    if (A != 0) {
        double x = -B / A;
        cout << "Розв'язок рівняння: x = " << fixed << setprecision(4) << x << "\n\n";
    } else {
        cout << "Помилка: A не може дорiвнювати 0\n\n";
    }

    // ===== Begin11 =====
    cout << "===== Begin11 =====\n";
    double L;
    cout << "Введiть довжину кола L: ";
    cin >> L;

    double R = L / (2 * PI);
    double S = PI * R * R;

    cout << "Радiус кола: " << fixed << setprecision(5) << R << endl;
    cout << "Площа круга: " << fixed << setprecision(3) << S << "\n\n";

    // ===== Begin41 =====
    cout << "===== Begin41 =====\n";
    double a, b, h;
    cout << "Введiть основу a: ";
    cin >> a;
    cout << "Введiть основу b: ";
    cin >> b;
    cout << "Введiть висоту h: ";
    cin >> h;

    double area = (a + b) / 2 * h;
    cout << "Площа трапецiї: " << fixed << setprecision(3) << area << endl;

    return 0;
}