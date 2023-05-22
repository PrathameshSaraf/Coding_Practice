#include<iostream>
using namespace std;
int addition(int a,int b);
int subtraction(int a,int b);
int multiplication(int a,int b);
int division(int a,int b);

 main()
{
    int x,y,s,a,d,m;
    cout<<"enter the two numbers ";
    cin>>x>>y;

 a=addition(x,y);
 s=subtraction(x,y);
 m=multiplication(x,y);
 d=division(x,y);


    cout<<"\ntwo numbers addition is "<<a;
   cout<<"\ntwo numbers subtraction is "<<s;
  cout<<"\ntwo numbers division is "<<d;
    cout<<"\ntwo numbers multiplication  is "<<m;
}
int addition(int a,int b)
{
    int i;
     for(i=0;i<b;i++)
     {
         a++;
     }
     return a;
}
int subtraction(int a,int b)
{
    int i;

    for(i=0;i<b;i++)
     {
         a--;
     }
     return a;

}
int multiplication (int a,int b)
{
    int i,j,p=0;
for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
    p++;
}
return p;
}
int division (int a,int b)
{
    int i,j,p=0;
for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
        p--;
}
return p;
}
