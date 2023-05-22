#include <iostream>
using namespace std;
int max (int,int);
double max (double,double);
 int max (int,int,int);
 int main ()
 {
     cout<<"\nthe maximum between 45 and 67="<<max(45,67);
     cout<<"\nthe maximum between 1.2 and 12.2="<<max(1.2,12.2);
     cout<<"\nthe maximum between 56 and 67 and 27="<<max(56,67,27);
     return 0;

 }
 int max (int a,int b)
 {
     if (a>b)
       return a;
     else
       return b;

 }
  double max (double a,double b)
{
      if (a>b)
       return a;
     else
       return b;
}
int max (int a,int b,int c)
{
    int max;
    max=(a>b)?((a>b)?a:b):((b>c)?b:c);
 return max;
 }
