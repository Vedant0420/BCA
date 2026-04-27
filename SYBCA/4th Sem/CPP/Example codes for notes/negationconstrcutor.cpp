#include <iostream>
#include <string>
using namespace std;

//// write a cpp programt to overload unary - operator using memeber function (negation)

class Negation{
    int num;
    public:
    Negation(int num){
        this->num = num;
    }
    void display()
    {
        cout << "Value of num is : " << num << endl; 
    }
    void operator -()
    {
        num = -num;
    }
};

int main (){
Negation n1(5);
cout << "Before overloading : " << endl;
n1.display();
- n1;
cout << "After overloading : ";
n1.display();
return 0;
}
