#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    reverse(&a[0], &a[a.size()]);
    reverse(&b[0], &b[b.size()]);
    //cout << endl << a << endl << b << endl;
    int value[120] = {0};
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            value[i + j] += ((a[i] - '0') * (b[j] - '0'));
        }
    }
    //for (int i = 0; i < 120; i++) cout << value[i] << ' ';
    int counter;
    for (int i = 0; i < 110; i++) {
        value[i + 1] += value[i] / 10;
        value[i] %= 10;
    }
    for (counter = 110; counter > 0; counter--) {
        if (value[counter - 1] != 0) break;
    }
    while (counter--) cout << value[counter];
}