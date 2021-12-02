#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int input;
    cin >> input;
    for (int i = 1; i <= input; i++) {
        for (int j = 0; j < input - i; j++) {
            cout << '_';
        }
        for (int j = 1; j < i * 2; j++) {
            cout << i;
        }
        cout << '\n';
    }
}