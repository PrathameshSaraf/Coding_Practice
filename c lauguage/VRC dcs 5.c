#include<stdio.h>
#include<conio.h>
void main()
{
    int data[3][4],i,j,a[4],count=0;
    printf("enter 3 number in 4 bit binary format e.g-;1 1 0 0\n");

   for(i=0;i<3;i++)
    {
        printf("%d binary number (4bit with space)\n",i+1);
        for(j=0;j<4;j++)
        {
            scanf("%d",&data[i][j]);
        }
    }
  for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if(data[i][j]==1)
                count++;
        }
        a[i]=count;
        count=0;
    }
    for(i=0;i<4;i++)
    {
        if(a[i]%2!=0)
        {
            a[i]=0;
        }
        else
        {
            a[i]=1;
        }
    }
    printf("\ngiven data\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
    printf("\ndata \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<4;i++)
        {
            printf("%d ",a[i]);
        }
        printf("LCR");
    getch();
}
