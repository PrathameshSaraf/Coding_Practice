//write a program to find negative or positive number .
#include<stdio.h>
void main ()
{
    int x;
    printf("enter the nos");
    scanf("%d",&x);

    if(x>0)
        printf("the no is positive %d",x);
    if (x<0)
        printf("the no is negative %d",x);
}
