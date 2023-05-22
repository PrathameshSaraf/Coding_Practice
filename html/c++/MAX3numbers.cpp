#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max=0;
    cout<<"enter the three numbers ";
    cin>>a>>b>>c;

    max=(a>b?(a>c?a:c):(b>c?b:c));
    cout<<"maximun number is "<<max;
}
