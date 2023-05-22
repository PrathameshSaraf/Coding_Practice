#include <stdio.h>
int sum(int );
void main ()
{
    int s ,n;
    printf ("enter the no ");
    scanf ("%d",&n);
    s= sum (n);
    printf("the %d  sum  of  digits no  is %d",n,s);
}
int sum(int n)
{
    int s  ;
    if (n<10)
        return (n);
    else
     s=n%10+sum(n/10);
        return (s);

}

