#include<iostream>
using namespace std;
int FtoC();
void FtoK();
void CtoF();
void CtoK();
void KtoF();
void KtoC();
main()
{
    int ch;

    cout<<"\t\ttemperature converter ";

    cout<<"\n\n choose only one ";
    cout<<"\n\t1. fehrites to celcius ";
    cout<<"\n\t2. fehrites to kelvin ";
    cout<<"\n\t3. celcius to fehrites ";
    cout<<"\n\t4. celcius to kelvin";
    cout<<"\n\t5. kelvin to fehrites ";
    cout<<"\n\t6. kelvin to celcius \n";
    cin>>ch;

    switch(ch)
    {
        case 1: FtoC();break;
        case 2: FtoK();break;
        case 3: CtoF();break;
        case 4: CtoK();break;
        case 5: KtoF();break;
        case 6: KtoC();break;
    }
}
    int FtoC()
    {
        float f,p=0;
        float c=0;
        cout<<"\nenter the temperature in fehrites ";
        cin>>f;

        p=f-32;
        c=p*0.555555;

        cout<<" \ntemperature in celcius is "<<c;
        return 0;
    }
    void FtoK()
    {
        float f,a=0,q;
        float k=0;
        cout<<"\nenter the temperature in fehrites ";
        cin>>f;
        q=f-32;
        a=0.55555*q;
        k=a+273.15;

        cout<<" \ntemperature in kelvin is "<<k;

    }
    void CtoF()
    {
        float c,p=0;
        float f=0;

        cout<<"\nenter the temperature in celcius ";
        cin>>c;

        p=c*1.8;
        f=p+32;

        cout<<" \ntemperature in fehrites is "<<f;
    }
    void CtoK()
    {
        float c;
        float k=0;

        cout<<" \nenter the temperature in celcius ";
        cin>>c;

        k=c+273.15;
        cout<<"\n temperature in kelvin is "<<k;
    }

    void KtoF()
    {
        float k,p=0;
        float f=0;

        cout<<"\n enter the temperature in kelvin ";
        cin>>k;

        p=((1.8*k)-491.67);
        f=p+32;

        cout<<"\n temperature in fehrites is "<<f;
    }
    void KtoC ()
    {
        float k;
        float c=0;
         cout<<"\nenter the temperature in kelvin ";
         cin>>k;

         c=k-273.15;

         cout<<"\n temperature in celcius is "<<c;
    }

