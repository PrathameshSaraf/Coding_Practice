#include<stdio.h>
void main()
{
    int x,y,sub,add ,mul;
    float div;
    printf("enter the 2 nos");
    scanf("\n%d%d",&x,&y);
    add=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;
    printf("\nthe addition of two no.is %d",add );
    printf("\nthe subtriction of two no.is %d",sub );
    printf("\nthe  multiplication of two no.is %d",mul );
    printf("\nthe division of two no.is %f",div );
}
