#include<iostream>
using namespace std;
int main ()
{
    int p,q,r ;
    cout<<"enter the three numbers ";
    cin>>p>>q>>r;

    if((p>q)&&(p>r))
    {
        cout<<"the maximum number is "<<p;
    }else if ((p<q)&&(r<q))
       {
        cout<<"the maximum number is "<<q;
       }else
          {
            cout<<"the maximum number is "<<r;
           }
}
