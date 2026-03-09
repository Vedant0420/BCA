#include <iostream>
using namespace std;

class Circle {
    float r, area;

public:
    // Constructor
    Circle(float radius) {
        r = radius;
        area = 3.14 * r * r;
        cout << "Area of Circle = " << area << endl;
    }

    // Destructor
    ~Circle() {
        cout << "Destructor called. Object destroyed.";
    }
};

int main() {
    float radius;
    cout << "Enter radius: ";
    cin >> radius;

    Circle c(radius);   // constructor called

    return 0;
}