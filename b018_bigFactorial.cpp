#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void recursion(int);
vector<int> now;

int main() {
    int num;
    cin >> num;

    vector<int>::iterator it;
    now.push_back(1);
    while (num--) recursion(num + 1);

    for (it = now.end() - 1; it >= now.begin(); it--) {
        cout << *it;
    }
}

void recursion(int input) {
    vector<int> temp;
    for (int counter = 0; input > 0; counter++) {
        int valueNow = input % 10;
        for (int j = 0; j < now.size(); j++) {
            if (j + counter >= temp.size()) {
                temp.push_back(valueNow * now[j]);
                continue;
            }
            temp[j + counter] += (valueNow * now[j]);
        }
        input /= 10;
    }
    now = temp;
    for (int i = 0; i < now.size() - 1; i++) {
        now[i + 1] += now[i] / 10;
        now[i] %= 10;
    }
    if (*(now.end() - 1) > 10) {
        now.push_back(*(now.end() - 1) / 10);
        *(now.end() - 2) %= 10;
    }
}