import java.util.*;
class Divisible1
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
 int esum=0,eodd=0;
 for( int i=1;i<=100;i++)
 {
 if(i%2==0)
  esum=i+esum;
  else
  eodd=i+eodd;
 }
System.out.println("the even no is sum ="+esum);
System.out.println("the odd no is sum ="+eodd);


}
}
