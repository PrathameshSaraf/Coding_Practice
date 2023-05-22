#include<iostream>
using namespace std;
main()
{
    int octa,i=0,a[8];

    cout<<"enter the octal number ";
    cin>>octa;

    while(octa!=0)
    {
        a[i]=octa%16;
        octa=octa/16;
        i++;
    }
    for(i=i-1;i>=0;i--)
    {
        cout<<a[i];
    }
}
