#include<iostream>
using namespace std;
void display(char);
void display(int);
void  display(double);
int main ()
{
    display('$');
    display(5);
    display(0.2);
}
void display (char a)
{
    cout<<"\ncharater="<<a;

}
void display (int a)
{
    cout <<"\ninterger="<<a;
}
void display (double a)
{
    cout<<"\nfloat="<<a;
}


