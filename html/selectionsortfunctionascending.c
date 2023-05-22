//write a program to sort array using selection  sort function.(asceding order)
#include<stdio.h>
void selection_sort(int n,int a[]);
void main()
 {
   
   int i,n,a[100];
printf("enter the size of an array:");
scanf("%d",&n);

printf("\nenter the elements of array ");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}

printf("\nbefore sorting array is a");
for(i=0;i<n;i++)
printf(" %d  ",a[i]);

selection_sort(n,a);
 }
 void selection_sort(int n,int a[])
 {
   int i ,j, position, swap;  
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (a[position] > a[j])
            position = j;
      }
      if (position != i) {
         swap = a[i];
         a[i] = a[position];
         a[position] = swap;
      }
   }
   printf("\n After sorting: \n");
   for (i = 0; i < n; i++)
      printf("%d\t", a[i]);
 }