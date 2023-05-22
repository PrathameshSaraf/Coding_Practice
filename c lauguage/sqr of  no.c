#include<stdio.h>
int  sqr (int );
void main ()
{
    int x;
    int t;
    printf ("enter the no ");
    scanf ("%d",&x);
   t=  sqr (x);
   printf ("\nthe square of the  no is %d",t);
}
int  sqr (int x )
{
    int s=x*x*x;

    return s;
}
