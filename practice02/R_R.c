#include<stdio.h>
int main(){
    int T ,i,j,x;
    scanf("%d", &T);
    for ( i = 1; i <= T; i++)
    {
        int sum = 0, N;
        scanf("%d", &N);

        for ( int j = 0; j < N ;j++){
            scanf("%d", &x);
            if(x>=0)
                sum = sum + x;

    }
    printf("Case %d: %d\n", i, sum);
    }
    return 0;
}