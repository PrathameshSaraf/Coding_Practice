#include<iostream>
using namespace std;
class sample
{
private:
    int a[10];
public:
    void read ();
    void print ();
};
void sample ::read()
{
    int i;
    cout<<"enter 10 numbers";
    for (i=0;i<10;i++)
      {
          cin>>a[i];
      }


}
       void sample::print()
    {
        int i ;
        for (i=0;i<10;i++)
      {
          cout<<a[i]<<"\t";
      }
    }

 int main ()
{
    sample obj;
    obj.read();
    cout <<"\narray in\n";
    obj.print();
return 0;
}
