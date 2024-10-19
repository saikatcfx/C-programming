#include <stdio.h>

// total odd number calculate
int odd(int n1, int n2)
{
  if (n1 <= n2)
  {
    if (n1 % 2 != 0)
    {
      printf("%d\n", n1);
    }
  }
      return n1 + odd(n1 + 1, n2);
}  

void main()
{
  int a, b;
  printf("enter any number ");
  scanf("%d%d", &a, &b);
  printf("%d\n", odd(a, b));
}