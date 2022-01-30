#include<stdio.h>
int gretaest(int a,int b,int c);
int main()
{
    int a,b,c, great;
    scanf("%d%d%d",&a,&b,&c);
    great = greatest(a, b, c);
    printf("The greatest number is =%d", great);

    return 0;
}
int greatest(int a,int b,int c)
{
if (a>b && a>c)
    return a;
 else if (b > a && b > c)

        return b;
else 
       
        return c;
}