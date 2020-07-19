
#include<stdio.h>
unsigned long long  fib(int n)
{
  unsigned long long  f[n+1];
  int i;
  f[0] = 0;   f[1] = 1; f[2]=2;
  for (i = 3; i <= n; i++)
      f[i] = f[i-1] + f[i-2];

  return f[n];
}

int main ()
{
  int n,i;
  for(i=1;;i++){
  scanf("%d",&n);
  if(n==0){break;}
  printf("%llu\n", fib(n));}
  return 0;
}
