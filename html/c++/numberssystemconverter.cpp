#include<iostream>
#include<math.h>
using namespace std;
void BtoD();
void DtoB();
void DtoO();
void DtoH();
void OtoD();
void BtoO();
void BtoH();
void HtoD();
void HtoB();
void HtoO();
void OtoB();
void OtoH();


main()
{
    int n , ch;

    cout<<"\t\tnumbers converter "<<endl;

    cout<<"\n\t1. binary to decimal ";
    cout<<"\n\t2. decimal to binary ";
    cout<<"\n\t3. decimal to octa ";
    cout<<"\n\t4. decimal to hex";
    cout<<"\n\t5. octa to decimal ";
    cout<<"\n\t6. binary to octa ";
    cout<<"\n\t7. binary to hex ";
    cout<<"\n\t8. hex to decimal ";
    cout<<"\n\t9. hex to binary  ";
    cout<<"\n\t10. hex to octa ";
    cout<<"\n\t11. octal to binary  ";
    cout<<"\n\t12. octa to hex ";
    

    cout<<"\n\nselect the one choice ";
    cin>>ch;

    
    
    switch(ch)
    {
        case 1:BtoD();break;
        case 2:DtoB();break;
        case 3: DtoO();break;
        case 4:DtoH();break;
        case 5: OtoD();break;
        case 6:BtoO();break;
        case 7:BtoH();break;
        case 8: HtoD();break;
        case 9: HtoB();break;
        case 10: HtoO();break;
        case 11: OtoB();break;
        case 12: OtoH();break;
        
    }
}
void BtoD()
{
    int n,i=0,bin=0,base=1,dec=0;
    cout<<"enter the Binary number ";
    cin>>n;
    
    while(n!=0)
    {
        bin=n%10;
        dec=dec+bin*base;
        base=base*2;
        i++;
        n=n/10;
    }

    cout<<"\n decimal number is "<<dec;
}
void DtoB()
{
    int i=0,n,bin[8];

    cout<<"enter the decimal number ";
    cin>>n;

    while(n!=0)
    {
        bin[i]=n%2;
        n=n/2;
        i++;
    }
     cout<<"\nbinary number is ";
    for(int j=i-1;j>=0;j--)
    
   cout<<bin[j];
    
}
void DtoO()
{
    int i=0,n,oct[8];

    cout<<"enter the decimal number ";
    cin>>n;

    while(n!=0)
    {
        oct[i]=n%8;
        n=n/8;
        i++;
    }
    cout<<"\noctal  number is ";
    for(i=i-1;i>=0;i--)
    {
        cout<<oct[i];
    }
}

void DtoH()
{
  int i=0,n,hexa;
  char hex[32];

    cout<<"enter the decimal number ";
    cin>>n;

    while(n!=0)
    {
        int temp =0;
        temp=n%16;
         
    if(temp < 10)
    {
        hex[i]=temp+48;
        i++;
    }
    else
    {
        hex[i]=temp+55;     
        i++;
    }
    n=n/16;
          cout<<"\n hexadecimal is "; 
          for(int j=i-1;j>=0;j--)
          cout<<hex[j];
}
}
void OtoD()
{
 int i=0,n,dec=0,base=1,rem=0;
cout<<"enter the octal number ";
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        dec=dec+rem*base;
        base=base*8;
        i++;
        n=n/10;
    }
cout<<"\n decimal number is "<<dec;

}
void BtoO()
{
    int base=1,dec=0,bin=0,i=0,rem=0,octa=0;
    long long n;

    cout << "\nEnter a binary number: ";
    cin >>n;

    while(n!=0)
    {
        bin=n%10;
        dec=dec+bin*base;
        base=base*2;
        i++;
        n=n/10;
    }
       
base=1;
i=0;
    while(dec!=0)
    {
        rem=dec%8;
        octa=octa+rem*base;
        base=base*10;
        i++;
    dec=dec/8;
    }

    cout<<"octal number is "<<octa;
}
void BtoH()
{
    long long bin;
    cout<<"\n enter the binary number ";
    cin>>bin;
    int h=0, m=1, c=1, rem,i=0;
    char hex[32];
    while(bin!=0)
    {
        rem = bin%10;
        h = h + (rem*m);
        if(c%4==0)
        {
            if(h<10)
                hex[i] = h+48;
            else
                hex[i] = h+55;
            m = 1;
            h = 0;
            c = 1;
            i++;
        }
        else
        {
            m = m*2;
            c++;
        }
        bin = bin/10;
    }
    if(c!=1)
        hex[i] = h+48;
    if(c==1)
        i--;

        cout<<" \n hexadecimal is ";
         for(i=i; i>=0; i--)
        cout<<hex[i];

}
void HtoD()
{
     int dec=0, rem, i=0, len=0;
    char hex[20];
    cout<<"\n Enter the Hexadecimal Number  ";
    cin>>hex;
    while(hex[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hex[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            
        }
        dec = dec + (rem*pow(16, i));
        len--;
        i++;
    }
    cout<<"\n Decimal number is  "<<dec;
     
     
}
void HtoB()
{
    int dec=0, rem, i=0, len=0;
    char hex[20];
    cout<<"\n Enter the Hexadecimal Number  ";
    cin>>hex;
    while(hex[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hex[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            
        }
        dec = dec + (rem*pow(16, i));
        len--;
        i++;
    }
    i=0;
    int bin[20];
        while(dec!=0)
    {
        bin[i]=dec%2;
        dec=dec/2;
        i++;
    }
     cout<<"\nbinary number is ";
    for(int j=i-1;j>=0;j--)
    
   cout<<bin[j];
    }
void HtoO()
{
  int dec=0, rem, i=0, len=0;
    char hex[20];
    cout<<"\n Enter the Hexadecimal Number  ";
    cin>>hex;
    while(hex[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hex[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            
        }
        dec = dec + (rem*pow(16, i));
        len--;
        i++;
    }  
    int oct[8];
    i=0;

    while(dec!=0)
    {
        oct[i]=dec%8;
        dec=dec/8;
        i++;
    }
    cout<<"\noctal  number is ";
    for(i=i-1;i>=0;i--)
    {
        cout<<oct[i];
    }
    
}
void OtoB()
{
    int i=0,n,dec=0,base=1,rem=0;
cout<<"enter the octal number ";
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        dec=dec+rem*base;
        base=base*8;
        i++;
        n=n/10;
    }
 
 int bin[8];
 i=0;

    
    while(dec!=0)
    {
        bin[i]=dec%2;
        dec=dec/2;
        i++;
    }
     cout<<"\nbinary number is ";
    for(int j=i-1;j>=0;j--)
    
   cout<<bin[j];

}
void OtoH()
{
    int i=0,n,dec=0,base=1,rem=0;
cout<<"enter the octal number ";
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        dec=dec+rem*base;
        base=base*8;
        i++;
        n=n/10;
    }

    int hexa;
  char hex[32];
  i=0;
    while(dec!=0)
    {
        int temp =0;
        temp=dec%16;
         
    if(temp < 10)
    {
        hex[i]=temp+48;
        i++;
    }
    else
    {
        hex[i]=temp+55;     
        i++;
    }
    dec=dec/16;
          cout<<"\n hexadecimal is "; 
          
          cout<<hex;
 
    }
}
