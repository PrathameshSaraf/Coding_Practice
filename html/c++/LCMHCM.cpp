#include<iostream>
using namespace std;
int main ()
{
    int H,L,p,q,s,t;

    cout<<"enter the  two number ";
    cin>>p>>q;

    if(p>q)
     s=p;
    else
     s=q;

    while(1)
    {
        if((s%p==0)&&(s%q==0))
        {
             break;
        }
        else
        {
             s++;
        }
    }
    cout<<"the LCM OF "<<p<<" and "<<q<<" is "<<s;

    cout<<"\n\n";

     if(p>q)
     s=p;
    else
     s=q;


while(1)
{
int i,j;
    for(i=1;i<=s;i++)
    {
        if((p%i==0)&&(q%i==0))
        {
          j=i;
        }
    }
cout<<"HCF is "<<j;
    return 0;
}
}