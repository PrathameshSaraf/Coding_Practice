#include<iostream>
using namespace std;
class sample
{
    private:
    int x ;
    float y;
    public :
    int set (int a ,float b )
    {
        x=a ;
        y=b;
        return 0;
    }
    int display()
    {
        cout<<"\n x ="<<x;
        cout<<"\ny="<<y;

         return 0;
    }

};
int main()
{
sample obj;
obj.set(25,4.7);
obj.display();
return 0;
}
