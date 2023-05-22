#include<iostream>
using namespace std;
inline int square (int a)
{
    return (a*a);
}
int main ()
{
    int x,y;
    cout<<"enter the no";
    cin>>x;
    y=square (x);
    cout<<"\nsquare ="<<y;
    return 0;

}
