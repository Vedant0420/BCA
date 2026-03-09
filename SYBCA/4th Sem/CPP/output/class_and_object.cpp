// #include <iostream>
// using namespace std;
// class student {
//     public:
//     int sprn;
//     string sname;
//     string ssub;
// }s1;

// int main ()
// {
//     student s1;
//     s1.sprn=1277240644;
//     s1.sname="vedant k";
//     s1.ssub="CPP";
//     cout<<"SPRn: "<<s1.sprn<<endl;
//     cout<<"Name: "<<s1.sname<<endl;
//     cout<<"Subject: "<<s1.ssub<<endl;
//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;
class student {
    public:
    int sprn;
    string sname;
    string ssub;
}s1;

int main ()
{
    student s1;
    cout<<"PRN: "<<endl;
    cin>>s1.sprn;
    cout<<"Name: "<<endl;
    cin>>s1.sname;
    cout<<"Subject: "<<endl;
    cin>>s1.ssub;
    cout << "Name   : " << s1.sname << endl;
    cout << "PRN    : " << s1.sprn << endl;
    cout << "Subject : " << s1.ssub << endl;

    return 0;
}

