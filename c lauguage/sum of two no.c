#include<stdio.h>
int  sqr (int );
void main ()
{
    int x;
    int s;
    printf ("enter the no ");
    scanf ("%d",x);
   s=  sqr (x);
   printf ("\nthe  square of the  no is %d",s);
}
int  sqr (int x )
{
    int s=x*x;

    return s;
}
