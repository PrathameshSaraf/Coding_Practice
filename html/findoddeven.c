////write a program to find even and odd number from user input .
#include<stdio.h>
void main ()
{
    int x;
    printf("enter the no");
    scanf("%d",&x);

    if(x%2==0)
        printf ("the no is even %d",x);
    if (x%2==1)
        printf("the no is odd %d",x);
}
