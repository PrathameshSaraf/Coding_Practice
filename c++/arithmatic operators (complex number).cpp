#include <iostream>
using namespace std;
class complex
{
    private:
        int real,img;
    public:
        complex()
        {

        }
        complex(int a,int b)
        {
            real=a;
            img=b;
        }
        void add (complex a,complex b)
        {
            real=a.real+b.real;
            img=a.img+b.img;
        }
        void display ()
        {
            cout<<"\n"<<real<<"+"<<img<<"i";
        }
};
    int main()
    {
        int x,y,b,a;
        cout<<"enter the real part value in complex form ";
        cin>>x>>a;
          cout<<"enter the  img part value in complex form";
        cin>>y>>b;
       complex c1(x,y),c2(a,b),c3;
       c3.add (c1,c2);
       c1.display();
        c2.display();
        cout<<"\n addition is ";
         c3.display();
         return 0;
    }























