#include <iostream>
using namespace std;

int main() {
    int length;
    cin >> length;

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if ((i - j) % 3) {
                cout << '-';
            } else {
                cout << '@';
            }
        }
        cout << '\n';
    }
}