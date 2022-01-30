#include<stdio.h>
int main(){
    float c, f;
    printf("Enter Value in Celcius:");
    scanf("%f", &c);
    f = c * 1.8 + 32;
    printf("The input value is :%f", c);
    printf("\nValue in Fahrenheit:%f", f);
}