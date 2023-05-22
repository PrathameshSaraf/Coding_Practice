#include <iostream>
using namespace std;
class test ;
class sample
{
private :
    int x;
public:
    int  getx()
    {
        cout<<"enter the  1st no";
        cin>>x;
        return 0;
    }

    friend void max ( sample ,test);
};
class test
{
private:
    int y;
public:
    int gety()
    {
        cout<<"enter the 2nd no ";
        cin>>y;
       return 0;
    }

    friend void  max (sample ,test);
};
int main ()
{
    sample s;
    test t;
    s.getx();
    t.gety();

      max (s,t);

    return 0 ;

}
void max (sample a ,test b)
{
     if(a.x>b.y)
        cout<<"\nmaximum="<<a.x;
     else
        cout<<"\nmaximum="<<b.y;
}
