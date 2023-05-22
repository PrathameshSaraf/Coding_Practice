//write a program to print a float value using pointer .
#include<stdio.h>
void main ()
{
    float x=50.2;
    float *p;
    p= &x;
    printf("\nthe address of x is %u",p);
    printf(" \nthe value  of x is %f",*p);

}
