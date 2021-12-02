#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int number;
    cin >> number;

    int sum = 0;
    for (int i = 1; i < number; i ++) {
        if (number % i == 0) sum += i;
    }

    if (sum > number) cout << "Abundant\n";
    if (sum == number) cout << "Perfect\n";
    if (sum < number) cout << "Deficient\n";
}