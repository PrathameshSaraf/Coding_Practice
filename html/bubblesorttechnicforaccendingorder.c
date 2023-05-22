//write a program to sort array using bubble sort technique (ascending).
#include<stdio.h>

void main(){
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

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++){
		if(a[j]>a[j+1])
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