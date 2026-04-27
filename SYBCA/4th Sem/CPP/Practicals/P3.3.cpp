#include <iostream>
using namespace std;

float gross_salary(float bs, float hra, float da, float ta) {
    return bs + hra + da + ta;
}

void net_salary(float gross_sal, float pt, float pf) {
    float net = gross_sal - (pt + pf);
    cout << "Net Salary = " << net;
}

int main() {
    float bs, hra, da, ta, pt, pf;

    cout << "Enter Basic Salary, HRA, DA, TA: ";
    cin >> bs >> hra >> da >> ta;

    cout << "Enter PT and PF: ";
    cin >> pt >> pf;

    float gross = gross_salary(bs, hra, da, ta);
    cout << "Gross Salary = " << gross << endl;

    net_salary(gross, pt, pf);

    return 0;
}
