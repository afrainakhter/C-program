#include<stdio.h>
int main()
{
  int n, sum=0, i=0,p=3;

  printf("Enter n value: ");
  scanf("%d", &n);

  while(i<=n)
  {
    sum =sum+p;
    i++;
    p+=8;

  }

  printf("Sum of  numbers = %d", sum);

  return 0;
}
