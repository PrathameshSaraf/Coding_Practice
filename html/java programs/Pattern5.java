import java.util.*;
class Pattern5
{
public static void main(String[]args)
{
 Scanner in=new Scanner(System.in);
 System.out.println("enter the number is character(A to Z) ASCII code(above 65)");
 int n = in.nextInt();

 for(int i=65;i<=n;i++)
 {
 for( char j=65;j<=i;j++)
 {
 System.out.print(j);
 }
 System.out.println(" ");
 }
 }
 }