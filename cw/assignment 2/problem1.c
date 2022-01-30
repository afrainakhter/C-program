/*Afrain Akhter Nur
20210104113
sem:1.1(spring)
group=c1
*/


#include<stdio.h>
int main()
{
      int i=1,n,s=0,curr=2;
      float avg;
      printf("Enter the value of n  : ");
      scanf("%d",&n);
    
      for(i=1;i<=n;i++)
      {
          s = s + curr;
          curr = curr + 2;
       
      }
      avg = s / n;
      printf("\nSum  : %d\n", s);
      printf("%.2f", avg);
      return 0;
}