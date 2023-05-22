#include<stdio.h>
void main ()
{
     int x=50,y=60;

     int *p ;
     p=&x;
     printf ("\nthe value of x is %d",*p);
     printf ("\nthe address of value x is %u",p);

          p=&y;
     printf ("\nthe value of y is %d",*p);
     printf ("\nthe address pf value y is %u",p);
}
