#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

string checkPrime(int);

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int number;
    cin >> number;
    
    cout << checkPrime(number);
}

string checkPrime(int fInput) {
    if (fInput < 2) return "NO\n";
    if (fInput & 1) {
        for (int i = 3; i <= sqrt(fInput); i++) {
            if (fInput % i == 0) return "NO\n";
        }
    } else {
        return (fInput == 2 ? "YES\n" : "NO\n");
    }
    return "YES\n";
}