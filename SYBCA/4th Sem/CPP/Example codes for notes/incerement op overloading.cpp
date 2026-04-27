// // write a cpp program to overload incrememnt operator

// #include <iostream>
// #include <cstring>
// using namespace std;
// class demo {
//     int num;
//     public :
//     demo(int num)
//     {
//         this->num=num;
//     }
//     void display()
//     {
//         cout<<num;
//     }
//     void operator ++()
//     {
//         ++num;
//     }
//     void operator ++(int)
//     {
//         num++;
//     }
// };
// int main()
// {
//     demo d1(10);
//     cout<<"Before increment : ";
//     d1.display();
//     ++d1;
//     cout<<"\nAfter pre-increment : ";
//     d1.display();
//     d1++;
//     cout<<"\nAfter post-increment : ";
//     d1.display();
//      return 0;
// }


// write a cpp program to maximum number of characters in a string compare

#include <iostream>
#include <string.h>
using namespace std;

class MaxChar {
    char str[20];

public: 
    MaxChar() {}

    MaxChar(char s[20]) {
        strcpy(this->str, s);
    }

    void display() {
        cout << "String : " << str << endl;
    }

    // Operator overloading
    MaxChar operator > (MaxChar S2) {
        if (strlen(str) > strlen(S2.str)) {
            return *this;
        } else {
            return S2;
        }
    }
};

int main() {
    MaxChar S1("MIT"), S2("Pune"), S3;

    cout << "String 1: ";
    S1.display();

    cout << "String 2: ";
    S2.display();

    S3 = S1 > S2;

    cout << "String with maximum characters: ";
    S3.display();

    return 0;
}

