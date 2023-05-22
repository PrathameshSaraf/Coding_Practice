#include<iostream>
using namespace std;
int main ()
{
    int x,y,i,p=1;
    cout<<"enter the number and power ";
    cin>>x>>y;

    for(i=1;i<=y;i++)
        {
          p=p*x;
        }
    cout<<p;
}
