#include<stdio.h>
 
int main()
{
    int T, a,b,c, i, mid;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if((c>a && c<b)||(c<a && c>b))
                mid=c;
            else if((b>a && b<c)||(b<a && b>c))
                mid=b;
            else
                mid=a;
            printf("Case %d: %d\n",i,mid);
        }
    }
    return 0;
}