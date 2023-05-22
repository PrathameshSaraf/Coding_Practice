#include <iostream.h>
using namespace std;
class time
{
    private:
        int hr,min;
    public:
        void read ()
        {
            cout<<"enter hr and min";
            cin>>hr>>min;
        }

        void add (time a, time b)
        {
            min = a.min + b.min;
            hr = a.hr + b.hr + min/60;
            min =min%60;
        }
        void display ()
        {
            cout<<"\n"<<hr<<":"<<min;
        }
};
    int main()
    {

       time   t1,t2,t3;
        t1.read();
        t2.read();
        t3.add(t1,t2);
        t1.display();
        t2.display();
        cout<<"\n addintion is ";
        t3.display();
    }























