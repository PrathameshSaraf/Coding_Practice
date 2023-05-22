#include <iostream>
using namespace std ;
void  swap(int&,int&);
//void swap (float&,float&);
//void swap (char&,char&);
int main ()
{
    int x,y;
    cout<<"\nenter the no ";
    cin>>x>>y;
    cout<<" \ninteger value before swaping";
    cout<<"\nx="<<x;
    cout<<"\ny="<<y;
     swap(x&,y&)



  // float  p,q;
   // cout<<"\nenter the no ";
   // cin>>p>>q;
   // cout<<" \nfloat  value before swaping";
   // cout<<"\np="<<p;
   // cout<<"\nq="<<q;

   // char a,b;
   // cout<<"\nenter the char  ";
   // cin>>a>>b;
   // cout<<" \ncharacter value  before swaping";
   // cout<<"\na="<<a;
   // cout<<"\nb="<<b;

}
void swap (int g,int h)
{
    int t;
    t=g;
    g=h;
    h=t;
  cout<<"\nafter swaping the int values";
    cout<<"\nx="<<g;
     cout<<"\ny="<<h;
}
