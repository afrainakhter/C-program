#include <stdio.h>

int main(){
    int x, sum, last, fast,sum;
    printf("Enter a value:");
    scanf("%d", &x);

    
    last = x % 10;
    sum = last;
    x = x / 10;
    last = x % 10;
    sum = sum + last;
    x = x / 10;
    last = x % 10;
    sum = sum + last;
    
    x = x / 10;
    last = x % 10;
    sum = sum + last;

    printf("%d", sum);
}
