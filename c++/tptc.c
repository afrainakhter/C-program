#include <stdio.h>
#include <math.h>
int main()
{int a;
float squareroot,square;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a>50)
    {
        square=a*a;
        printf("%f",square);
    }
    else
    {
        squareroot=sqrt(a);
        printf("%f",squareroot);
    }

    return 0;
}