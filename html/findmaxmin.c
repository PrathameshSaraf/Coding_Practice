//write a program to find maximum and minimum number from user input .
#include<stdio.h>
void main ()
{
    int x,y;
    printf (" enter the two nos\n");
    scanf ("%d%d",&x,&y);

    if(x>y)
        printf("\nmaximum number is   %d",x);
        else 
         printf("\n minimum number is  %d",x);
    if (x<y)
        printf("\nmaximum number  is  %d",y);
        else 
         printf("\nminimum number is  %d",y);

     
}
