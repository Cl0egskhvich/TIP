#include <iostream> /*for*/
using namespace std;

int main() {
    int n;
    int a[1000];
    int size = 0;
    int count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (size > 0 && a[size - 1] == x) {
            size--;
            count += 2;
        }
        else {
            a[size] = x;
            size++;
        }
    }

    cout << count;

    return 0;
}


#include <iostream> /*while*/
using namespace std;

int main() {
    int n;
    int a[1000];
    int size = 0;
    int count = 0;

    cin >> n;

    int i = 0;

    while (i < n) {
        int x;
        cin >> x;

        if (size > 0 && a[size - 1] == x) {
            size--;
            count += 2;
        }
        else {
            a[size] = x;
            size++;
        }

        i++;
    }

    cout << count;

    return 0;
}


#include <iostream> /*do while*/
using namespace std;

int main() {
    int n;
    int a[1000];
    int size = 0;
    int count = 0;

    cin >> n;

    int i = 0;

    if (n > 0) {
        do {
            int x;
            cin >> x;

            if (size > 0 && a[size - 1] == x) {
                size--;
                count += 2;
            }
            else {
                a[size] = x;
                size++;
            }

            i++;
        } while (i < n);
    }

    cout << count;

    return 0;
}