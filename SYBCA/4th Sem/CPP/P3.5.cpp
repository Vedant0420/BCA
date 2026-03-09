#include <iostream>
using namespace std;

void oddEven(int n) {
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

void div3and5(int n) {
    if (n % 3 == 0 && n % 5 == 0)
        cout << "Divisible by 3 and 5";
    else
        cout << "Not divisible by 3 and 5";
}

void posNeg(int n) {
    if (n > 0)
        cout << "Positive";
    else if (n < 0)
        cout << "Negative";
    else
        cout << "Zero";
}

int main() {
    int ch, num;

    cout << "1. Odd or Even\n";
    cout << "2. Divisible by 3 and 5\n";
    cout << "3. Positive or Negative\n";
    cout << "Enter choice: ";
    cin >> ch;

    cout << "Enter number: ";
    cin >> num;

    switch (ch) {
        case 1: oddEven(num); break;
        case 2: div3and5(num); break;
        case 3: posNeg(num); break;
        default: cout << "Invalid choice";
    }

    return 0;
}
