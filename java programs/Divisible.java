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
