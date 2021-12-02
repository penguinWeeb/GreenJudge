#include <iostream>

using namespace std;

int gcd(int, int);

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int a, b;
    cin >> a >> b;
    
    cout << gcd(a, b) << '\n';
}

int gcd(int x, int y) {
    if (y == 0) return x;

    return gcd(y, x % y);
}
