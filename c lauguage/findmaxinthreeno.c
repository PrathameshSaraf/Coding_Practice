#include<stdio.h>
void main ()
{
    int x,y,z;

printf("enter the three no");
scanf ("%d%d%d",&x,&y,&z);

if (x>y)
{
    if(x>z)
        printf("the no is maximum%d",x);
    else
        printf ("the no maximum %d",z);
}
else
{
    if (y>z)
        printf("the no is maximum %d",y);
    else
        printf("the no is maximum %d",z);
}
}
