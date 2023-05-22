//write a program to find  sum of 1 to nth number
import java.util.*;
class Sum
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
System.out.println("enter the number");
int n = in.nextInt();
int sum=0;
 for( int i=1;i<=n;i++)
 {
 sum=sum+i;
  }
    System.out.println("sum is ="+sum);



}
}
