//write a program to print student info using struct function 
#include<stdio.h>
struct student
{
    int rollno;
    char n[5];
    float marks ;
};

void main ()
{
    struct student s1;
    int i;
    
    printf("enter the roll no.");
    scanf("%d",&s1.rollno);
    

    printf("enter the name ");
    
    scanf("%s",&s1.n[5]);

      printf("\n %d",s1.rollno);
      
    printf("\n name is %s",s1.n[5]);

}