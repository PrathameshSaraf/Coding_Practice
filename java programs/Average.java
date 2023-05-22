import java.util.*;
class Average
{
public static void main(String[]args)
{Scanner in = new Scanner (System.in);
System.out.println("enter the two number");
int n = in.nextInt();
int m = in.nextInt();
int q = in.nextInt();

int sum = n+m+q;
 double avg = sum/3.0;
System.out.println("Avarage="+avg);
}
}
