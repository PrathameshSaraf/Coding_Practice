//write a program print array to user input size and numbers 
#include<stdio.h>
void main()
{ 
    int num;
printf("how many numbers you want to creat array");
scanf("%d",&num);
    int a[num],i;
    printf("enter the numbers \n");
    for(i=1;i<=num;i++)
    scanf("%d",&a[i]);
    printf("\narray is ");
    for(i=1;i<=num;i++)
         printf("\n%d",a[i]);
}
