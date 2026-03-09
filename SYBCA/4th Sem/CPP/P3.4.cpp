#include <iostream>
using namespace std;

void checkPrime(int n) {
    if (n <= 1) {
        cout << "Not Prime";
        return;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "Not Prime";
            return;
        }
    }
    cout << "Prime";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    checkPrime(n);
    return 0;
}
