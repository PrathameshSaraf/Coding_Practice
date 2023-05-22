#include<iostream>
using namespace std;
int main()
{
    int a,i,r,q;
    int  s[10]={'\0'};
     
    cout<<"\nenter the decimal number ";
    cin>>a;
int count=1;
    q=a;
    int flag=!0;
    r=0;
    while(q!=0)
    {
        for(i=0;i<5;i++)
        {
            r=q%2;
            
            s[i]=r;
            q=q/2;
            count++;
         }
    }

   for(i=count;i>=0;i--)
    
   cout<<s[i];
      
     
}

