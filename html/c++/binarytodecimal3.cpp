#include <iostream>
using namespace std;

int main()
{
    char binaryNumber[] = "11010";

    int x= stoi(binaryNumber, 0, 2);
    cout<<x;

    return 0;
}
