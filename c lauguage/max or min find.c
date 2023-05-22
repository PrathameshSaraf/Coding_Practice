#include<stdio.h>
void main ()
{
    int x,y;
    printf (" enter the two nos\n");
    scanf ("%d%d",&x,&y);

    if(x>y)
        printf("no. is maximum  %d",x);
    if (x<y)
        printf("the no is maximum %d",y);
}
