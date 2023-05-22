//write a program to find the maximum digit in the number 
import java.util.*;
class Gretestdigit
{
public static void main(String[]args)
{
Scanner in = new Scanner(System.in);

System.out.println("enter the no");
int n=in.nextInt();
int max=0,r;
 while(n!=0)
{
   r=n%10;
   if(r>max)
   max=r;
   n=n/10;
}
System.out.println("gretest digit is ="+max);

}
}
