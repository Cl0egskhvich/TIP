#include <iostream>

using namespace std;

class Snail {
private:
    int a, b, h;

public:
    Snail(int a, int b, int h) {
        this->a = a;
        this->b = b;
        this->h = h;
    }

    int Counter_of_days() {
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
};

int main() {
    int a, b, h;

    cin >> a >> b >> h;

    Snail snail(a, b, h);

    cout << snail.Counter_of_days() << endl;

    return 0;
}