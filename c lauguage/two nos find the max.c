#include<stdio.h>
int min (int,int);
void main ()
{
    int x,y, m;
    printf("enter the two no ");
    scanf ("%d%d",&x,&y);
    m=min(x,y);
    printf ("the minimum no. is %d",m);

}
int min (int x,int y )
{
    int t;
    if(x<y)
        return(x);
    else
      return (y);
}
