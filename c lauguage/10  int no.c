#include<stdio.h>
void main()
{
    int a[10],i;
    printf("enter the 10 nos\n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("\narray is ");
    for(i=0;i<=9;i++)
         printf("\n%d",&a[i]);
}
