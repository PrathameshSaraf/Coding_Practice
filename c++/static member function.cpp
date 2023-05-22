#include<iostream>
using namespace std;
class sample
{


private :
    int x;
    static int y;
public:
    sample(int a,int b)
    {
        x=a;
        y=b;
    }
    sample display()
    {
        cout<<"\nx="<<x;
        cout<<"\ny="<<y;
    }
    static void show ()
    {
       cout<<"\ny="<<y;
    }
};
int sample ::y;
int main ()
{
    sample s1(10,20),s2(30,40),s3(50,60);

    s1.display();
    s2.display();
    s3.display();
    sample :: show();
    return 0;
}
