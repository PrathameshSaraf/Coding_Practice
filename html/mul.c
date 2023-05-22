//write a program to perform multiplication from user input numbers 
#include<stdio.h>
void main()
{
    int i,mul=1,num;
    printf("how many numbers you want to multiplication ");
    scanf("%d",&num);
    int a[num];
    printf("enter the numbers");
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);
       mul=a[i]*mul;
   }
printf("your numbers multiplication  is %d",mul);

}