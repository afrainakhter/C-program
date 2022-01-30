#include <stdio.h>
int main()
{
    int n1, n2, remainder, numerator, denominator, gcd;
    scanf("%d%d", &n1, &n2);
    numerator = (n1 > n2) ? n1 : n2;
    denominator = (n1 > n2) ? n2 : n1;
    remainder = numerator % denominator;

    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    printf("%d", gcd);
    return 0;
}