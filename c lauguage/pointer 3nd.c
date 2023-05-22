#include<stdio.h>
void main ()
{
     int x=50,y=60 ,sum =0;

     int *p ,*q ,*r ;

  p=&x,q=&y,r=&sum ;
         *r =*p+*q;
printf ("\nthe  sum of two no  %d",*r);

}
