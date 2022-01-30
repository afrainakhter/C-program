#include<stdio.h>
int main(){
    int T,N,sum=0;
    scanf("%d", &T);
    for (int i = 0; i < T;i++)
        {
            
            scanf("%d", &N);
            int sum = 0;
            while (N>0)
            {
                int id = N % 10;
                sum = sum + id;
                N = N / 10;
            }
            printf("%d\n", sum);
        }
}