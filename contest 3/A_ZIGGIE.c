#include<stdio.h>

int main()
{

    long long int N, i, j, T, flag = 0;
    scanf("%lld", &T);

    while(T--){
      scanf("%lld", &N);
      int flag = 1;
      for(i=2; i<=N/2; i++){
        if(N%i==0)
        flag = 0;
      }
      if(flag==1){
        printf("yes\n");}
      else{
        printf("no\n");}
    }
    return 0;
}
