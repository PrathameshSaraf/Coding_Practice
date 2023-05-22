//write a program to find the number is prime or not 
import java.util.*;
class Prime
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
System.out.println("enter the no");
 int n=in.nextInt();

    if(n%2==0 || n%3==0)
    System.out.println(+n+"is not  prime");
    else
    System.out.println(+n+"is prime");

}
}
