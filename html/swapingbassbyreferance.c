//write a program to swaping number using pass by referance 
#include <stdio.h>
int swap (int *,int *);
void main ()
{
    int x,y;
    printf("enter the two values ");
    scanf("%d%d",&x,&y);
    printf ("\nbefore call value of x is %d and y is %d",x ,y);
    swap(&x,&y);
    printf ("\nafter the call value of x is %d and  y is %d",x,y);

}
int swap (int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
