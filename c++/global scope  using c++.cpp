#include<iostream>
using namespace std;
int x=20;
int main ()
{
    int x=10 ;
     cout<<"\nlocal="<<x;
     cout<<"\nglobal="<<::x;
    return 0;
}
