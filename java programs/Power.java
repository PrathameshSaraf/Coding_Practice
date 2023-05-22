import java.util.*;
class Power
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
  System.out.println("enter n and m number");
int n = in.nextInt();
int m = in.nextInt();
 int s=1;
 for( int i=1;i<=m;i++)
 {
    s = s*n;
 }
System.out.println("the "+n+"th power"+m+" is = "+s);

}
}
