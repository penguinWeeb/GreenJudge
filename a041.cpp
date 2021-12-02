#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int number;
    cin >> number;

    int eaten = 0;
    while (number >= 5) {
        eaten += number - number % 5;
        number = number / 5 + number % 5;
    }

    cout << eaten + number << "\n";
}