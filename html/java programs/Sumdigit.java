//write a program to find sum of all digit 
import java.util.*;
class Sumdigit
{
public static void main(String[]args)
{
Scanner in = new Scanner(System.in);

System.out.println("enter the no");
int n=in.nextInt();
int d,sum=0;
 while(n!=0)
{
  d=n%10;
  sum=sum+d;
n=n/10;
}
System.out.println("sum of digit is ="+sum);

}
}
