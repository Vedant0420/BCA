#include <iostream>
using namespace std;

int maximum(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Largest number = " << maximum(x, y, z);
    return 0;
}
