//
import java.util.*;
class Salary1
{
public static void main(String[]args)
{
    Scanner in = new Scanner (System.in);
    System.out.println("enter the basic salary");
    int b = in.nextInt();

double HRA=0,DA=0;
 if(b<5000)
 {
   HRA= b*0.20 ;
   DA = b*0.35 ;
 }
  double G = (double)b+HRA+DA;
  System.out.println("total gross salary ="+G);
}
}

