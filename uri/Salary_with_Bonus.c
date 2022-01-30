#include<stdio.h>
#include<stdlib.h>
int main(){
    char n[20];
    double a, b, c, d;
    fgets(n, 20, stdin);
    scanf("%lf %lf", &a, &b);
    d = b * .15;
    c = a+d;
    printf("TOTAL = R$ %.2lf\n", c);
}