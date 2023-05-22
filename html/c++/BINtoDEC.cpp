#include<iostream>
using namespace std;
main()
{
    int b,d,i,j,p,q;
    cout<<"\nenter the binary number";
    cin>>b;
    q=1;
    d=0;
    p=b;
    for(i=0;i<5;i++)
    {
       int x=p%10;
      for(j=0;j<i;j++)
          q=q*2;
       if(x==1)
          {
              d=d+q;
              
          }
           p=p/10;
    }
    cout<<"\ndecimal     "<<d<<endl;
}
