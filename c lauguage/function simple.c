#include<stdio.h>
int  sum (int ,int);
void main ()
{
    int x=5;
    int y=6;
    int s;
   s=  sum (x,y);
   printf ("\nthe sum of two no is %d",s);
}
int  sum (int x ,int y )
{
    int s=x+y;
    printf("\nthe value of x is %d",x);
    printf("\nthe value of y is %d",y);
    return s;
}
