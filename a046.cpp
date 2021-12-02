#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << '#';
        }
        cout << '\n';
    }
}