#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, h, days;
    days=0;

    cin >> a >> b >> h;
    if (b >= a) {
    cout << "Улитка не сможет добраться до вершины" << endl;
    return 0;
    }
    
    while (h > 0) {
        h -= a;
        days++;

        if (h > 0) {
            h += b;
        }
    }

    cout << days << endl;

    return 0;
}