#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two number:");
    scanf("%d%d", &num1, &num2);
    if(num1>num2)
        printf("Number 1 is large");
    else if (num1==num2)
        printf("Numbers are equal");
        else
            printf("Number 2 in large");
}