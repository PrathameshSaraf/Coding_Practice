#include<iostream>
using namespace std;
int main ()
{
    int x=10 ;
    int &a=x;
     cout<<"\n x="<<x;
     cout<<"\n a="<<a;
      x=20;
     cout<<"\n x="<<x;
     cout<<"\n a="<<a;
     x=30;
     cout<<"\n x="<<x;
     cout<<"\n a="<<a;
    return 0;
}
