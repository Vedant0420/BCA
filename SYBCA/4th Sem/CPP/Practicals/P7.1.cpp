// Assignment-7 P7.1: Product Class
// Create a class Product with data members: product no, product Name, quantity and price per unit.
// Define member functions to Accept and Display product details with total price.

#include <iostream>
#include <string>
using namespace std;

class Product
{
    private:
        int productNo;
        string productName;
        int quantity;
        float pricePerUnit;

    public:
        // Accept product details
        void accept()
        {
            cout << "\n========== ACCEPT PRODUCT DETAILS ==========" << endl;
            cout << "Enter Product No: ";
            cin >> productNo;
            cin.ignore(); // To ignore the newline left in the buffer
            cout << "Enter Product Name: ";
            getline(cin, productName);
            cout << "Enter Quantity: ";
            cin >> quantity;
            cout << "Enter Price per Unit: ";
            cin >> pricePerUnit;
        }

        // Display product details with total price
        void display()
        {
            float totalPrice = quantity * pricePerUnit;
            cout << "\n========== PRODUCT DETAILS ==========" << endl;
            cout << "Product No      : " << productNo << endl;
            cout << "Product Name    : " << productName << endl;
            cout << "Quantity        : " << quantity << endl;
            cout << "Price Per Unit  : " << pricePerUnit << endl;
            cout << "Total Price     : " << totalPrice << endl;
            cout << "=====================================" << endl;
        }
};

int main()
{
    Product p;
    p.accept();
    p.display();

    return 0;
}
