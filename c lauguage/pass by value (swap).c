#include<stdio.h>
int swap (int,int);
void main()
{
    int x=2;
    int y=3;
    printf("\nbefore call value x is %d and y is %d",x,y);
    swap(x,y);
    printf ("\nafter call value of x is %d and y is %d",x,y);

}
int swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
