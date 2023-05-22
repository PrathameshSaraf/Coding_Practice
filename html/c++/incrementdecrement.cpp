#include<iostream>
using namespace std;

int main()
{
    int a,b,c ,d,e,f;

    cout<<"enter the two numbers";
    cin>>a>>b;
     c=a++;
    cout<<"\n a++ is "<<c;
    cout<<"\n a is "<<a;
     d=++a;
    cout<<" \n++a is "<<d;

     e=b--;
    cout<<"\n b-- is "<<e;
    cout<<"\n b is "<<b;
    f=--b;
    cout<<"\n  --b is "<<f;


}
