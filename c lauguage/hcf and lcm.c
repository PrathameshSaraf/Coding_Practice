 #include <stdio.h>
long fun(long, long); // function declaration
int main()
{
  long a, b, hc, lc;
  printf("Enter two numbers: ");
  scanf("%ld%ld", &a, &b);

  hc = fun(a, b);// Function Calling
  lc = (a*b)/hc;

  printf(" The highest Common Factor of %ld and %ld = %ld\n", a, b, hc);
  printf(" The Least Common Multiple of %ld and %ld = %ld\n", a, b, lc);

  return 0;
}

long fun(long a, long b) // Function definition
{
  if (a == 0)
  {
    return b;
  }

  while (b != 0) {
    if (a > b) {
      a = a - b;
    }
    else {
      b = b - a;
    }
  }

  return a;
}
