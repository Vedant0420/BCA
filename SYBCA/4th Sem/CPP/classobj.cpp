#include <iostream>
#include <string>
using namespace std;

class snacks{
    public:
    string name;
    int price;
        void eat(){
            cout<<"Eating "<<name<<" which costs "<<price<<" dollars."<<endl;
        }
}s;

int main(){
    s.name = "Chips";
    s.price = 10;
    cout<<"The name of the snack is: "<<s.name<<endl;
    cout<<"The price of the snack is: "<<s.price<<endl;
    s.eat();
    return 0;
}