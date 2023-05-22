//write a program to find string of length 
#include<stdio.h>
void main()
{
      int t=0,p;
      p=0;
    char str[30];
    printf("enter the string ");
    gets (str);
        while(str[t]!=p)
     {
         t++;
     }
     printf ("the string of length is %d", t);
}
