#include<stdio.h>
int main()
{
        int n,sum,sum1=0,i=1,j=1;

        printf("\nEnter value for n = ");
        scanf("%d",&n);

        for(;i<=n;i++)
    {
                sum=0;
                for(;j<=i;j++)
                {
                    sum=sum+j;
                }
                sum1=sum1+sum;
        }

        printf("\nThe Sum of Series up to Value  %d  =  %d ",n,sum1);

        return 0;
}
