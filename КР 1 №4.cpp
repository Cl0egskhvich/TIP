#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    char symbol;
    cin >> symbol;

    // Вывод имени и фамилии
    if (symbol == 'S') {
        cout << "Selikhov Egor";
    }

    // Нахождение корней
    if (symbol == 'b') {
        double D = pow(b,2) - 4 * a * c;

        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);

            cout << x1 << "\n" << x2;
        }
        else if (D == 0) {
            double x = -b / (2 * a);

            cout << x;
        }
        else {
            cout << "No solution";
        }
    }

    // Проверка одинаковых цифр
    if (symbol == 'a') {
        int number;
        cin >> number;

        int lastnum;
        int k=0;

        while (number > 0) {
            lastnum = number % 10;
            number = number / 10;

            if (number % 10 == lastnum) {
                k++;
            }
        }

        if (k>0) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
    }

    return 0;
}