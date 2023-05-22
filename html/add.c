//write a program to additing numbers from user input
#include<stdio.h>
int main()
{
    int i,sum=0,num,p;
    printf("how many numbers you want to addition ");
    scanf("%d",&num);
    int a[num];
    printf("enter the numbers");
   for(i=0;i<num;i++)
   {
       scanf("%d",&a[i]);
       sum=a[i]+sum;
   }
printf("your numbers addition is %d",sum);

return 0;

}
