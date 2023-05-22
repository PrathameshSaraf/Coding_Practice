//write a program to sort array using insertion sort function.(descending order)
#include <stdio.h>  
void insertion_sort(int n,int a[]);
void main()
{
   
    int a[100],i,n;

printf("enter the size of an array:");
scanf("%d",&n);

printf("\nenter the elements of array ");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}

printf("\nbefore sorting array is a");
for(i=0;i<n;i++)
printf(" %d  ",a[i]);

insertion_sort(n,a);

}
void insertion_sort(int n,int a[])
{
    int i,j,temp,key ;

     for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && a[j-1] < a[j])
            {	        
                temp     = a[j];
                a[j]   = a[j-1];
                a[j-1] = temp;
                j--;
            }
    }
    printf("\nSorted list in descending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", a[i]);
    }
}