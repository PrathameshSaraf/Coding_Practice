#include<iostream>
using namespace std;
main()
{
    int x,y,a,o,xo,com,left,right;

    cout<<"enter the two number";
    cin>>x>>y;

    a=x&y;
    o=x|y;
    xo=x^y;
    com=~y;
    left=x<<y;
    right=x>>y;

    cout<<"\n anding operation is  "<<a;
    cout<<"\n oring operation is  "<<o;
    cout<<"\n XOR operation is  "<<xo;
    cout<<"\n ones complement operation is  "<<com;
    cout<<"\n shift left bit operation is "<<left;
    cout<<"\n shift right bit operation is "<<right;

}
