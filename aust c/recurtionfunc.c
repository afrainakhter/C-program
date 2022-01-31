#include <stdio.h>
int fact();
int main()
{

    int res = 1, i, j, n;
    scanf("%d", &n);
    res = n * fact(n - 1);
    printf("%d!=%d", n, res);
}
int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}