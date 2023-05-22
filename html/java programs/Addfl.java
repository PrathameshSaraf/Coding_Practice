//write a java program to sum of first and last digit in the number 
import java.util.*;
class Addfl
{
public static void main(String[]args)
{
Scanner in = new Scanner(System.in);

System.out.println("enter the no");
int n=in.nextInt();
int s=0;
 while(n!=0)
{
  int f=n%10;
  int l=n%1000;
    s=f+l;
 }
System.out.println("the first and last digit sum is"+s);

 }
}
