//Write a simple cpp program to calculate SI using constructor
#include <iostream>
using namespace std;
class SI
{
    private:
    float p,r,t,si;
    public:
    SI(float x,float y,float z)
    {
        p=x;
        r=y;
        t=z;
        si=0;
    }
    void calculate()
    {
        si=((p*r*t)/100);
        cout<<"Simple Interest: "<<si<<endl;
    }
};

int main()
{
    float principal,rate,time;
    cout<<"Enter principal amount: ";
    cin>>principal;
    cout<<"Enter rate of interest: ";
    cin>>rate;
    cout<<"Enter time in years: ";
    cin>>time;
    SI obj(principal,rate,time);
    obj.calculate();
    return 0;
}
