#include <stdio.h>
int sum(int n);
int main()
{

    int n;
    printf("enter number:");
    scanf("%d", &n);

    printf("%d", sum(n));
}
int sum(int n)
{
    if (n == 0)
        return 0;
    else

        return n + sum(n - 1);
}