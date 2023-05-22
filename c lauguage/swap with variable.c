#include<stdio.h>
void main ()
{
    int x,y ;
    printf("enter the two values");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swaoing  nos  %d and %d",x,y);
}
