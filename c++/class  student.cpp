#include<iostream>
using namespace std;
class student
{
private :
    int rno;
    char  name [50];
    int m1,m2,m3,total;
    float avg;
public:
    int getdata ()
    {
        cout<<"\nenter the roll no. of student ";
        cin>>rno;
        cout<<"\nenter the name of student ";
        cin>>name;
        cout<<"\nenter the marks of three subject";
        cin>>m1>>m2>>m3;

        total =m1+m2+m3;
        avg=total/3.0;
        return 0;

    }
    int putdata()
    {
        cout<<"\n"<<rno<<"\t"<<name<<"\t"<<total<<"\t"<<avg;
        return 0;
    }
};
int  main ()
{
    student s1,s2,s3;

    s1.getdata();
    s2.getdata();
    s3.getdata();

cout<<"\nroll No\tname\ttatal\tavg";
    s1.putdata();
    s2.putdata();
    s3.putdata();

    return 0;

}
