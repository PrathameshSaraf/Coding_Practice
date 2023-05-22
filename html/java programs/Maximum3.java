//write a program to find maximum number in the 3 input number 
import java.util.*;
class Maximum3
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
System.out.println("enter the three number");
int n = in.nextInt();
int m = in.nextInt();
int q = in.nextInt();

if(n>m&&n>q)
System.out.println("maximum = "+n);
else
  if (m>n&&m>q)
  System.out.println("maximum = "+m);
  else
  System.out.println("maximum = "+q);


}
}
