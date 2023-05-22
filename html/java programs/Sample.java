//write a program to find the number is divisible 17 or not of given input .
import java.util.*;
class Sample
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
System.out.println("enter the number");
int n = in.nextInt();
 if(n%17==0)
System.out.println("divided by 17 this no "+n);
else
System.out.println("  not divided by 17 this no "+n);
}
}
