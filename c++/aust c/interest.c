#include<stdio.h>
int main()
{
    int si, p, r, t, T;
    printf("Enter Time,Rate,principal:");
    scanf("%d%d%d", &p, &r, &t);
    si = p * t * r / 100;
    T = p + si;
    printf("Simple Interest:%d", si);
    printf("\nTotal Amount :%d", T);
    

}