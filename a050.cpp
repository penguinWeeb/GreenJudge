#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            cout << j << "x" << i << "= " << setw(2) << i * j << "  "; 
        }
        cout << '\n';
    }
}