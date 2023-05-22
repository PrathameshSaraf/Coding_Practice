#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data ;
    struct node *next ;
};
struct node *head=NULL;

void main()
{
  int ch;
  printf("\n 1 create  \n 2 display");
printf("\nenter the choice");
scanf("%d",&ch);
switch(ch)
{   case 1: create();break;
    case 2: display();break;

    default:printf("\ninvalid choice");
}while(ch<3);

}
void create()
{
    struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("the list is empty");
    }
    printf("\nenter data ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else 
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display()
{
    struct node *temp;
    temp=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        printf("elements are =");
        while(temp!=NULL)
        {
            printf("\t %d",temp->data);
            temp=temp->next;
        }
    }
}