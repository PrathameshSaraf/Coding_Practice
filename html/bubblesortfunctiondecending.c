//write a program to sort array using bubble  sort function.(decending order)
#include<stdio.h>
void bubble_sort(int n,int a[]);

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

bubble_sort(n,a);

}
void bubble_sort(int n , int a[])
{
    int i,j,key;
    for(i=0;i<n;i++)
{
	for(j=0;j<n;j++){
		if(a[j]<a[j+1])
		{
			key=a[j];
			a[j]=a[j+1];
			a[j+1]=key;
		}
	}
}
printf("\n After sorting: \n");
for(i=0;i<n;i++){
	printf("%d \t",a[i]);
}

}