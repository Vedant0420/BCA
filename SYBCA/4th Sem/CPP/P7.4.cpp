// Assignment-7 P7.4: Number Class
// Create a class Number with pointer as a data member.
// Define member functions to accept 'n' numbers and display number of even and odd numbers
// from it using dynamic memory allocation.

#include <iostream>
using namespace std;

class Number
{
    private:
        int *ptr;      // Pointer to store numbers
        int n;         // Number of elements
        int evenCount;
        int oddCount;

    public:
        // Constructor
        Number()
        {
            ptr = nullptr;
            n = 0;
            evenCount = 0;
            oddCount = 0;
        }

        // Accept n numbers using dynamic memory allocation
        void accept()
        {
            cout << "Enter number of elements: ";
            cin >> n;

            // Dynamic memory allocation
            ptr = new int[n];

            cout << "Enter " << n << " numbers: " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "Number " << (i + 1) << ": ";
                cin >> ptr[i];
            }
        }

        // Count and display even and odd numbers
        void display()
        {
            evenCount = 0;
            oddCount = 0;

            cout << "\n======= ANALYSIS OF NUMBERS =======" << endl;
            cout << "Numbers entered: ";
            for (int i = 0; i < n; i++)
            {
                cout << ptr[i] << " ";
                if (ptr[i] % 2 == 0)
                    evenCount++;
                else
                    oddCount++;
            }
            cout << endl;
            cout << "Total Even Numbers: " << evenCount << endl;
            cout << "Total Odd Numbers : " << oddCount << endl;
            cout << "====================================" << endl;
        }

        // Destructor - Deallocate memory
        ~Number()
        {
            if (ptr != nullptr)
            {
                delete[] ptr;
                ptr = nullptr;
                cout << "\nMemory deallocated successfully!" << endl;
            }
        }
};

int main()
{
    Number num;
    num.accept();
    num.display();

    return 0;
}
