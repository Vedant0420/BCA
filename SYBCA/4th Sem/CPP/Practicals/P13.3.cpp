// Assignment-13 P13.3
// Abstract class Shape with pure virtual area() and runtime polymorphism

#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual void getInput() = 0;
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    double radius;

public:
    void getInput() override
    {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    double area() const override
    {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    void getInput() override
    {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }

    double area() const override
    {
        return length * width;
    }
};

class Triangle : public Shape
{
private:
    double base;
    double height;

public:
    void getInput() override
    {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }

    double area() const override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    int choice;
    Shape *shapePtr = 0;

    cout << "\n1. Circle\n2. Rectangle\n3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        shapePtr = new Circle();
        break;
    case 2:
        shapePtr = new Rectangle();
        break;
    case 3:
        shapePtr = new Triangle();
        break;
    default:
        cout << "Invalid choice." << endl;
        return 0;
    }

    shapePtr->getInput();
    cout << "Area = " << shapePtr->area() << endl;

    delete shapePtr;
    return 0;
}
