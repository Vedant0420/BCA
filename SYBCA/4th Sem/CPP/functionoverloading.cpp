// make a menu driven cpp program using function overloading 

#include <iostream>
#include <math.h>
using namespace std;

float area(float r)
{
    return 3.14*r*r;
}

int area(int l, int b) 
{
    return l * b;

}

int area (int s)
{
    return s*s;
}

int main(){
    int choice;
    cout << "Choose the shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Square\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1: {
            float radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            cout << "Area of Circle: " << area(radius) << endl;
            break;
        }
        case 2: {
            int length, breadth;
            cout << "Enter length and breadth of the rectangle: ";
            cin >> length >> breadth;
            cout << "Area of Rectangle: " << area(length, breadth) << endl;
            break;
        }
        case 3: {
            int side;
            cout << "Enter side of the square: ";
            cin >> side;
            cout << "Area of Square: " << area(side) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}