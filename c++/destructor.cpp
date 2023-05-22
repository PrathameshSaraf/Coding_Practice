#include<iostream>
using namespace std;
class sample
{
public:
    sample()
    {
        cout<<"\ninside the constructor class";
    }
    ~sample ()
    {
        cout<<"\ninside the  destructor class";
    }

};
int main ()
{
    sample s1,s2,s3;
    cout<<"\nhellow world ";
    cout<<"\n i love c++";
    return 0;
}
