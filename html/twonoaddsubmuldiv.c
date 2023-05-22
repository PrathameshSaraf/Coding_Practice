//write a program to perform addition subtration mutiplication and division of the given two inputs 
#include<stdio.h>
void main()
{
    int sum,div,sub,mul,remi,x,y;
    printf("enter the two no.");
    scanf("%d%d",&x,&y);


    sum=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;
   remi=x%y;

    printf("\nyour sum is %d",sum);
    printf("\nyour sub is %d",sub);
    printf("\nyour div is %d",div);
    printf("\nyour mul is %d",mul);
     printf("\nyour remaining is %d",remi);
}