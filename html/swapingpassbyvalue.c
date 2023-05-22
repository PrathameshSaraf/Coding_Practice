//write a program to swaping number using pass by value
#include<stdio.h>
int swap (int,int);
void main()
{
    int x,y,v,p;
    printf("enter the two numbers ");
    scanf("%d%d",&x,&y);
    printf("\nbefore call value x is %d and y is %d",x,y);
    swap(x,y);
    printf ("\nafter call value of x is %d and y is %d",y,x);

}
int swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
