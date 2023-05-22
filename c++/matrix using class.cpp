#include<iostream>
using namespace std;
class matrix
{
private:
    int a[3][3];
public:
    void read ();
    void print ();
};
void matrix ::read()
{
    int i,j;
    cout<<"enter matrix no  numbers";
    for (i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          cin>>a[i][j];
      }
}
       void matrix::print()
    {
        int i ,j;
        for (i=0;i< 3;i++)
      {cout<<"\n";
        for(j=0;j<3;j++)
          cout<< a[i][j] ;
      }
    }

 int main ()
{
    matrix obj;
    obj.read();
    cout <<"\n matrix in\n";
    obj.print();
return 0;
}
