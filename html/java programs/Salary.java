//write a program to find gross salary of input is basic salary 
import java.util.*;
class Salary
{
public static void main(String[]args)
{
    Scanner in = new Scanner (System.in);
 System.out.println("enter the basic salary");
int b = in.nextInt();

double HRA=0,DA=0;
 if(b<5000)
 {
   HRA= b*0.10 ;
   DA = b*0.25 ;
 }
  double G = (double)b+HRA+DA;
  System.out.println("total gross salary ="+G);
}
}

