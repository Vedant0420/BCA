//write a cpp program to find sum and product of first N integer numbers usin functions
#include <iostream>
using namespace std;
void sumAndProduct(int n, int &sum, int &product) {
    sum = 0;
    product = 1;
    for (int i = 1; i <= n; ++i) {
        sum += i;
        product *= i;
    }
}
int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    int sum, product;
    sumAndProduct(N, sum, product);

    cout << "Sum of first " << N << " integers: " << sum << endl;
    cout << "Product of first " << N << " integers: " << product << endl;

    return 0;
}