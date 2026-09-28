#include <iostream>
#include <cmath>

using namespace std;

double calculateHypotenuse(int a, int b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main() {
    int a, b;

    cin >> a >> b;

    double hypotenuse = calculateHypotenuse(a, b);

    cout << hypotenuse << endl;

    return 0;
}