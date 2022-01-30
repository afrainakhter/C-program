#include <stdio.h>
#include <math.h>

int main()
{int x, a = 0;
    printf("Enter the number:");
    scanf("%d",&x);
    while(x!=1)
    {
        if(x%2==0)
        {
            x/= 2;
        }
        else
        {
            a=1;
            break;
        }  
    } 
    if(a==1)
    {
        printf("the entered number is not power of 2 ");
    }
    else
        printf("the entered number is power of 2 ");
        return 0;
}