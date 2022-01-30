#include <stdio.h>

int main()
{
    int a,b,c,gcd,i;
    scanf("%d %d" , &a,&b);
     if(a>=1 && a<=10000 && b>=1 && b<=10000 ){
          for (i = 1; i <= a && i <= b; ++i) {
        
        
             if (a % i == 0 && b % i == 0)
              gcd = i;
    }

    c = (a * b) / gcd;

     if(c>=1 && c<=100000000){

     printf("%d\n", c);
     }}
     return 0;
}