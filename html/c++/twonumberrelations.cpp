#include<iostream>
using namespace std;
 main()
{
    int x,y;
    cout<<"enter the two numbers ";
    cin>>x>>y;

    if( x>y)
    {
        cout<<x<<" is greter then "<<y;
    }else if (x<y)
    {
        cout<<x<<" is less then "<<y;
    }else if (x<=y)
    {
        cout<<x<<" is less than equal to "<<y;
    } else if (x>=y)
    {
        cout<<x<<" is greter then equal to "<<y;
    } else if (x==y)
    {
        cout<<x<<" is not equal to  "<<y;
    }

}
