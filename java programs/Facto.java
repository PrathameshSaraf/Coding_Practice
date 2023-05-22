import java.util.*;
class Facto
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
System.out.println("enter the number");
int n = in.nextInt();
int f=1;
 for( int i=1;i<=n;i++)
 {
 f=f*i;
 }
  System.out.println("factorial is ="+f);


}
}
