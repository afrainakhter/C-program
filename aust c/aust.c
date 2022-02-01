
// func - sum,multiply(calculator)
// project- data insert
// 2 kind _ stand lib, user define
// returntype funcname(list of parameter);
// int main();
// int disply();
#include <stdio.h>
int sum(int, int); // parameter// prototype = function declaration funtion dekhte kmn 

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    // argument

    printf("%d", sum(a, b));//arrgument
}
int sum(int x, int y) // argument pass
{
    int res;
    res = x + y;

    return res;
}

