#include<stdio.h>
int main(){
    float kmh, mph;
    printf("Enter Value in KM/H:");
    scanf("%f", &kmh);
    mph = kmh/1.609;
    printf("The input value is :%f", kmh);
    printf("\nValue in MP/H15:%f", mph);
}