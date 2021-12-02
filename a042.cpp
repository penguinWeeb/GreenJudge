#include <iostream>

using namespace std;

int evaluate(int);

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int power;
    cin >> power;

    cout << evaluate(power);
}

int evaluate(int power) {
    int product = 1;
    for (int i = 0; i < power; i++) {
        product *= 13;
        product %= 100;
    }
    return product / 10;
}