//write a program to print all the numbers divisible by N between 100 to 200
import java.util.*;
class Divisible
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
System.out.println("enter the number");
int n = in.nextInt();
   System.out.println("this is all value divisible by "+n+"=");

 for( int i=100;i<=200;i++)
 {
  if(i%n==0);
   System.out.print(" "+i+" ");
 }
}
}
