#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    char name [30],ph[15], ch,N;
    ch==N;
    fout.open("records.txt",ios::app);
do
{


        cout<<"\nenter  the name ";
        cin>>name;
        cout<<"\nenter the phone ";
        cin>>ph;

        fout<<name<<"\t"<<ph<<"\n";
        cout <<"\n add more?(Y/N)";
        cin>>N;
}while (ch== N);

    fout.close();
    return 0;


}
