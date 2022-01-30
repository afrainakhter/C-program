#include<stdio.h>
 int main()
{
   long int n,k,sum,cig;
   while(scanf("%ld%ld",&n,&k)==2)
   {
      sum=0;
      sum=  n+n/k;
      cig=  n/k+n%k;
       while(cig>=k)
       {
          sum=sum+cig/k;
          cig=  cig/k+cig%k;
       }    
       printf("%ld\n",sum);
  }
   return(0);
}