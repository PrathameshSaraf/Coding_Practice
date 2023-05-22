#include<stdio.h>
void main()
{
    int r;
    float area ,perimeter,x=3.14;
    printf("enter the radius");
    scanf("\n%d",&r);
    area=x*r*r;
    perimeter=2*x*r;
    printf("\nthe area of circle is %f",area );
    printf("\nthe perimeter of circle is %f",perimeter );
}
