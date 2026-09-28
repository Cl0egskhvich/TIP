#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int a;
    int b;
    cin >> a >> b;
    double Hypotenuse=sqrt(pow(a,2)+pow(b,2));
    cout << Hypotenuse << endl;

    return 0;
}