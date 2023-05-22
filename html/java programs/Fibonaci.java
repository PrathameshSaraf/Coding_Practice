//write a program to find the fibonaci series 
import java.util.*;
class Fibonaci
{
public static void main(String[]args)
{
Scanner in = new Scanner(System.in);

System.out.println("enter the no");
int n=in.nextInt();

int x=0,y=1,sum=0;

for(int i=0;i<=n;i++)
{
System.out.println(x+"\t");
sum=x+y;
x=y;
y=sum;
}
}
}
