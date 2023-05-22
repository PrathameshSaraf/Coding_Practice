#include<stdio.h>
void main()
{
    int x,y,z,add;
    float avg;
    printf("enter the 3 nos");
    scanf("\n%d%d%d",&x,&y,&z);
    add=x+y+z;
    avg=add/3;
    printf("\nthe addition of three no.is %d",add );
    printf("\nthe avg is %f",avg );
}
