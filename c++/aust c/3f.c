#include<stdio.h>
int n1;
void number();
int main()
{
    number(n1);
    if (n1%2==0)
    {
        printf("Even");

    }else
        printf("Odd");
}
void number()
{
    scanf("%d", &n1);
}