#include<iostream>
using namespace std;
class student
{
   private :
       int roll,seat,enl,age ;
       char name[50],gender[60],city[30] ,mno[15];
   public:
    void read();
    void print();
};
void student :: read()
{
    cout<<"enter the roll no ";
    cin>>roll;
    cout<<"enter the student name ";
    cin>>name;
    cout<<"enter the seat no";
    cin>>seat;
    cout<<"enter the enllorment no";
    cin>>enl;
    cout<<"enter the city";
    cin>>city;
    cout<<"enter the gender ";
    cin>>gender ;
    cout<<"enter the mobile no";
    cin>>mno;
    cout<<"enter the age ";
    cin>>age;

}
void student::print()
{
        cout<<"\nroll\tname\tseat\tenl\tcity\tgender\tmno\tage";

    cout<<"\n"<<roll<<"\t"<<name<<"\t"<<seat<<"\t"<<enl<<"\t"<<city<<"\t"<<gender<<"\t"<<mno<<"\t"<<age;
}
int main()
{
     int  i;
    student  s[i];

    for (i=0;i<10;i++)
    {
        s[i].read();
    }
    for (i=0;i,10;i++)
    {
        s[i].print();
        return 0;
    }
}

