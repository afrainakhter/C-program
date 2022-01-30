#include<stdio.h>
int n1,n2;
void number();
int main()
{
    number(n1);
    if (n1>n2)
    {
        printf("%dis greater than %d",n1,n2);

    }else if(n2>n1)
        printf("%dis greater than %d",n2,n1);
        else
            printf("numbers are equal");
}
void number()
{
    scanf("%d%d", &n1,&n2);
}