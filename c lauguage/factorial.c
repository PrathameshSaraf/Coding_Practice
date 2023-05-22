#include <stdio.h>
int fact(int );
void main ()
{
    int n,f;
    printf ("enter the no ");
    scanf ("%d",&n);
    f=fact(n);
        printf ("the factorial of the no is %d ",f);

}
int fact(int n)
{
    int i ,f=1;
    for (i=1;i<=n;i++)
        f=f*i;
            return(f);

}
