// main.cpp
#include <iostream>
#include "hypotenuse.h"

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    double hypotenuse = calculateHypotenuse(a, b);

    cout << hypotenuse << endl;

    return 0;
}
