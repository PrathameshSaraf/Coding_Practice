#include<stdio.h>
void quick_sort(int a[],int first,int last );
void main()
{
    int i,size,first ,last;
    int a[100];
    printf("enter the size of array ");
    scanf("%d",&size);

    printf("enter the array of element");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

printf("\nbefore sorting array is ");
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);

    quick_sort(a,0,size-1);
    printf("\nafter sorting array is ");
    for(i=0;i<size;i++)
    printf("%d\t",a[i]);
}
quick_sort(int a[],int first,int last)
{
     int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quick_sort(a,first,j-1);
        quick_sort(a,j+1,last);
   }
}
