//write a a program to two inputs and checking divisible or not   
#include<stdio.h>
void main ()
{
    int x,n;
    printf("enter two no ");
    scanf ("%d%d",&x,&n);

    if (x%n==0)
        printf("the %d is divisible by %d ",x,n);
    else
        printf("the %d is not divisible by %d ",x,n);

}
