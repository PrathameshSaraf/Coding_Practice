 
#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char n[50];
    float marks ;
};

void display(struct student st)
{
    printf("roll no :%d\n",st.rollno);
    printf("name :%s\n",st.n);
    printf("marks :%f\n",st.marks);
}
void main ()
{
    struct student s1;
    s1.rollno=4;
    strcpy(s1.n,"ron");
    s1.marks=88.00;

    display(s1);
return 0;    


}