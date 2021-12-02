#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    short ans[120] = {0};
    for (int i = 0; i < b.size(); i++) {
        ans[i] += b[b.size() - i - 1] - '0';
    } 
    for (int i = 0; i < a.size(); i++) {
        ans[i] += a[a.size() - i - 1] - '0';
    } 
    for (int i = 0; i < 110; i++) {
        ans[i + 1] += ans[i] / 10;
        ans[i] %= 10;
    }
    int counter;
    for (counter = 110; counter > 0; counter--) {
        if (ans[counter - 1] != 0) break;
    }
    while (counter--) cout << ans[counter];
}