#include<stdio.h>
int main(){
    int a, b;

    float c,d;
    scanf("%d %d %f", &a, &b, &c);
    d = c* b;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", d);
    return 0;
}