#include <iostream>
using namespace std;
class test;
class sample
{
private:
    int  x ;
public:
    int  getx()
    {
        cout<<"enter the value";
        cin>>x;
        return 0;
    }
    int putx()
    {
        cout<<x;
        return 0;
    }
    friend int swap ( sample   ,test);
};
class test
{
private:
    int y;
public:
    int gety()
    {
        cout<<"enter the no ";
        cin>>y;
       return 0;
    }
    int puty()
    {
        cout<<y;
        return 0;
    }
    friend int swap (sample ,test);
};
int main ()
{
    sample s;
    test t;
    s.getx();
    t.gety();
    cout<<"before swaping value x and y";
    s.putx();
    t.puty();
      swap (s,t);
    cout<<"before swaping value x and y" ;
    return 0;

}
void  swap (sample &a ,test &b)
{
    int p;
    p=a.x;
    a.x=b.y:
    b.y=p;

}
