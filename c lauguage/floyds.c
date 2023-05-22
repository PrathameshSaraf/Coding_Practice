/*C Program for Floyd’s Triangle*/
#include <stdio.h>
int main() {
 int n, x,  y, num = 1;// n is the number of rows
    printf("\n Enter the rows the Floyd's Triagle :"); // Asking for number of rows of floyd's triangle
 scanf("%d",&n);
    for ( x = 1 ; x <= n ; x++ )
    {
    for ( y = 1 ; y <= x ; y++ )
 {
 printf(" %d ", num); // printig the numbers
 num++;
 }
 printf("\n"); //  control goes to new line
 }
 return 0;
}
