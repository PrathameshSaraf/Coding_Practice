#include<iostream>
using namespace std;
main()
{

    int a,b,c,i,r,q,rev=0;


    cout<<"enter the number";
    cin>>a;

    q=a;
    while(q!=0)
    {
        r=q%10;
        rev=rev*10+r;
        q=q/10;
    }

    if(a==rev)
      cout<<"number  is palindrom";
    else
      cout<<"number  is not palindrom";
}
