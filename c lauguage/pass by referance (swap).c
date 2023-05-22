#include <stdio.h>
int swap (int *,int *);
void main ()
{
    int x=2;
    int y=3;
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
