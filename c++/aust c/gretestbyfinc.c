#include<stdio.h>
int greatest(int a, int b, int c);
int main()
{
    int a, b, c,great;

    scanf("%d %d %d", &a, &b, &c);
    great=greatest(a, b, c);
    printf("Largest value is: %d", great);
}
int greatest(int a,int b,int c){
    if(a>b && a>c)
        return a;
    else if (b > c && b > a)
        return b;
    else
        return c;
}