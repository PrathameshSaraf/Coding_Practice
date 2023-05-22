/*write a Program to sort an array in ascending order using Insertion Sort technique*/
#include <stdio.h>
void main()
{
    int  temp;
    int a[100],i,j,n,key;

printf("enter the size of an array:");
scanf("%d",&n);

printf("\nenter the elements of array ");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}

printf("\nbefore sorting array is a");
for(i=0;i<n;i++)
printf(" %d  ",a[i]);
    
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && a[j-1] > a[j])
            {	        
                temp     = a[j];
                a[j]   = a[j-1];
                a[j-1] = temp;
                j--;
            }
    }
    printf("\nSorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", a[i]);
    }
}