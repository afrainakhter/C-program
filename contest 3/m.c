#include<stdio.h>
 
int main()
{
    int T, a, b,sum,count,i,j;
    while(scanf("%d",&T)==1)
    {
       for(j=1;j<=T;j++)
       {
            scanf("%d%d",&a, &b);
            if(a%2==0)
                count=a+1;
            else
                count=a;
            sum=0;
            for(i=count;i<=b;i=i+2)
            {
                sum+=i;
            }
            printf("Case %d: %d\n",j,sum);
       }
    }
    return 0;
}
