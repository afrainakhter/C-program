#include<stdio.h>
int main(){

    int  i,k,t;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &k);
        for (i = 1;;i++){
        if(i%3==0||i%10==3){
            continue;
        }else{
            --k;
        }
        if(k==0){
            printf("%d\n", i);
            break;
        }
        }
    }
}