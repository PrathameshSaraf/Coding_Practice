//write a program to perform the division from  user input numbers .
#include<stdio.h>
void main()
{
    int i,div,num;
    printf("how many numbers you want to division ");
    scanf("%d",&num);
    int a[num];
    printf("enter the numbers");
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);
   }
    div=a[0];
   for(i=1;i<num;i++)
   {
       div=div/a[i];
   }
printf("your numbers division is %d",div);

}