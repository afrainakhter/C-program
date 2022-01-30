#include <stdio.h>

int main()
{
    float a,b,rem,quotient;

    printf("\nEnter first number : ");
    scanf("%f",&a);
    printf("\nEnter second number :");
    scanf("%f",&b);
    quotient = a / b;
    rem = a - (quotient) * b;
    printf("Quotient of A & B is:%.2f", quotient);
    printf("\nRemainder of [ %.2f ] & [ %.2f ] is = %.0f\n", a, b, rem);
    return 0;
}