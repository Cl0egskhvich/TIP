#include <iostream>

using namespace std;

int Counter_of_days(int a, int b, int h);

int main() {
    int a, b, h;

    cin >> a >> b >> h;

    cout << Counter_of_days(a, b, h) << endl;

    return 0;
}