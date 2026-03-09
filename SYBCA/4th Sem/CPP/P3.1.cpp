#include <iostream>
using namespace std;

void checkChar(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase letter";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase letter";
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Special symbol";
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    checkChar(ch);
    return 0;
}
