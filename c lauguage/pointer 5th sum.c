#include<stdio.h>
void main ()
{
    int x=50 ;
     int *p ;
     p=&x ;

printf ("\nthe value x is  %d ",x);
   *p =60;
   printf ("\nthe value x is  %d ",x);
}

