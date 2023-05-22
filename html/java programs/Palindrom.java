//write a program to find string is palindrom or not 
import java.util.*;
class Palindrom
{
public static void main(String[]args)
{
Scanner in = new Scanner(System.in);

System.out.println("enter the no");
int n=in.nextInt();

int temp=n;
int r;
int rev=0;
 while(n!=0)
{
   r=n%10;
    rev=rev*10+r;
   n=n/10;
}
if(temp==rev)
System.out.println("string is palindrom");
else
System.out.println("string is not palindrom");


}
}
