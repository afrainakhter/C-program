#include<stdio.h>
int main(){
   int i=1,sum=0,n,b=3;
   scanf("%d", &n);
   while (i <= n)
   {
      sum = sum + b;
      b = b + 8;
      
      i++;
}

printf("%d", sum);
}