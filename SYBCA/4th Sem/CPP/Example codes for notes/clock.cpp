#include <iostream>
using namespace std;

// Cube
float volume(int a)
{
    return a * a * a;
}

// Cylinder
float volume(int r, int h)
{
    return 3.14 * r * r * h;
}

// Sphere (changed type to avoid conflict)
float volume(float r)
{
    return (4.0/3.0) * 3.14 * r * r * r;
}

int main()
{
    int choice;
    cout << "Choose the shape:\n";
    cout << "1. Cube\n2. Cylinder\n3. Sphere\n";
    cin >> choice;

    switch(choice)
    {
        case 1: {
            int a;
            cout << "Enter side of cube: ";
            cin >> a;
            cout << "Volume of Cube: " << volume(a) << endl;
            break;
        }

        case 2: {
            int r, h;
            cout << "Enter radius and height of cylinder: ";
            cin >> r >> h;
            cout << "Volume of Cylinder: " << volume(r, h) << endl;
            break;
        }

        case 3: {
            float r;
            cout << "Enter radius of sphere: ";
            cin >> r;
            cout << "Volume of Sphere: " << volume(r) << endl;
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}