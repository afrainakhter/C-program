#include<stdio.h>
int main(){
    int T, i, N, K, P, sum;
    scanf("%d", &T);

    for (i = 1; i <= T;i++)
    {
      
     scanf("%d %d %d", &N, &K,&P);
     sum = (K + P) % N;
     if(sum==0){
         sum = N;
            printf("Case %d: %d\n",i,sum);}
    }
    return 0;
}