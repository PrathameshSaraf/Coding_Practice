#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(char asc_element)
{
     printf("\n Element : %c \n ASCII : %d",asc_element,asc_element);
}
void main()
{  
     int ch;

     while(1)
     {
          _flushall();
          char asc_element;

          printf("\n Enter Element : \t");
          scanf("%c",&asc_element);
          display(asc_element);
          _flushall();
          
          printf("\n Enter choice (1.YES/2.NO) ");
          scanf("%d",&ch);

          if(ch == 1)
          {
               _flushall();
              // break;
          }
          else{
               break;
          }
     }
}