#include<stdio.h>
int main(){
   int a,b,rem;
   printf("enter any two numbers:");
   scanf("%d%d",&a,&b);
   while(b!=0)
    {
      rem=a % b;
      a=b;
      b=rem;
      printf("the dividing number:%d\n",a);

   }
   printf("GCD of two numbers is:%d\n",a);
   return 0;
}
