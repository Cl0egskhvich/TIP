#include <iostream>

using namespace std;

int Counter_of_days(int a, int b, int h) {
    int days = 0;

    while (h > 0) {
        h -= a;
        days++;

        if (h > 0) {
            h += b;
        }
    }

    return days;
}

int main() {
    int a, b, h;

    cin >> a >> b >> h;
    
    if (b >= a) {
    cout << "Улитка не сможет добраться до вершины" << endl;
    return 0;
    }

    cout << Counter_of_days(a, b, h) << endl;

    return 0;
}