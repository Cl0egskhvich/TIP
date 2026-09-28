#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    int a;
    int b;

public:
    Triangle(int a, int b) {
        this->a = a;
        this->b = b;
    }

    double calculateHypotenuse() {
        return sqrt(pow(a, 2) + pow(b, 2));
    }
};

int main() {
    int a, b;

    cin >> a >> b;

    Triangle triangle(a, b);

    cout << triangle.calculateHypotenuse() << endl;

    return 0;
}