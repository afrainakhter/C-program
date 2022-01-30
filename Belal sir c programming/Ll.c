#include<stdio.h>
int main(){
    long long n;
    scanf("%lli",&n);
    n = ((n) * (n + 1)) / 2;

    if (n % 2)
        printf("1");
        else
        printf("0");
}