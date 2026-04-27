//Write a CPP program to find area and perimeter of circle using constant concept.
#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14;
    float r;
    cin >> r;

    cout << "Area = " << PI * r * r << endl;
    cout << "Perimeter = " << 2 * PI * r << endl;
    return 0;
}
