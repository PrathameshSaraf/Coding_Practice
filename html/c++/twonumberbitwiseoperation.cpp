#include<iostream>
using namespace std;
 main()
{
    int x,y,z,a,d,c,e,f,g;
    cout<<"enter the two numbers ";
    cin>>x>>y;

     z=(x&y);
     a=(x|y);
     d=(x^y);
     c=(~x);
     g=(~y);
     e=(x<<y);
     f=(x>>y);


     cout<<" x & y = "<<z<<endl;
      cout<<" x | y = "<<a<<endl;
       cout<<" x ^ y = "<<d<<endl;
        cout<<" ~ x = "<<c<<endl;
        cout<<" ~ y = "<<g<<endl;
         cout<<" x << y = "<<e<<endl;
          cout<<" x >> y = "<<f<<endl;
}
