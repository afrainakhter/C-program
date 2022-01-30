#include <stdio.h>
int main()
{
     long long int A, B;
     double c;
     scanf("%lld %lld", &A, &B);
     c = (((A - B) / (double)A)) * 100;
     {
         printf("%1.5f\n", c);
     }
     return 0;
}