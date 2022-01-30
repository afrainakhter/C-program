#include<stdio.h>

int main()
{
    int T,a,b,c,tri;
    scanf("%d",&T);

    for(tri=1;tri<=T;tri++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a*a + b*b == c*c) || (a*a + c*c == b*b ) || (b*b + c*c == a*a) )
        {
            printf("Case %d: yes\n",tri);
        }

        else printf("Case %d: no\n",tri);
    }

    return 0;
}
