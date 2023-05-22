#include<iostream>
using namespace std;
class sample
{


private :

    static int c;
public:
    sample( )
    {
         c--;
    }
    sample display()
    {
        cout<<"\nc="<<c;

    }
    static void show ()
    {
       cout<<"\nc="<<c;
    }
};
int sample ::c;
int main ()
{
    sample s1 ,s2 ,s3;

    s1.display();
    s2.display();
    s3.display();
    sample :: show();
    return 0;
}
