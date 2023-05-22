import java.util.*;
class Pattern2
{
public static void main(String[]args)
{
 Scanner in=new Scanner(System.in);
 System.out.println("enter the number");
 int n = in.nextInt();

 for(int p=1;p<=n;p++)
 {
 for(int q=1;q<=p;q++)
 {

 System.out.print(+q);
 }
 System.out.println(" ");
 }
 }
 }