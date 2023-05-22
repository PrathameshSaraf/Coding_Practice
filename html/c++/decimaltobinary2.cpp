#include <iostream>
using namespace std;

// Function that convert Decimal to binary
int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 7; i >= 0; i--) {
        int k = n >> i;


       if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

// driver code
int main()
{
    int n = 22;
    decToBinary(n);
}
