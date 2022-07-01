#include <stdio.h>
int fibo(int m);
int main()
{
  int i, n, s;
  printf("fabanoccie no.\n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    s = fibo(i);
    printf("fibo series of a no %d is %d\n", i, s);
  }

  return 0;
}

int fibo(int m)
{

  if (m == 1)
  {
    return 0;
  }
  else if (m == 2)
  {
    return 1;
  }
  return fibo(m - 1) + fibo(m - 2);
}