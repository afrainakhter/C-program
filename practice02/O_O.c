#include<stdio.h>
int main(){
    int N,  t = 1,num=0,count=1;
    while (scanf("%d",&N))
    {
        if(N<0)
            break;
        num = 0;
        count = 1;
        while (count < N)
        {
            num++;
            count = count * 2;

            }printf("Case %d: %d\n", t++, num);
}
return 0;
}