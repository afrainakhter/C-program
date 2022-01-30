
#include<stdio.h>
int main()
{
        int n,sum,sum1=0,i=1,j=1,u,x=0;

        printf("\nEnter value for n = ");
        scanf("%d",&n);

        for(;i<=n;i++)
    {
                sum=0;
                j++;
                {
                    sum=sum+j;
                    x++;
                }
                sum1=sum1+sum;
        }
        u=sum1-x;

        printf("\nThe Sum of Series up to Value  %d  =  %d ",n,u);

 return 0;
}
