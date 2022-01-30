#include<stdio.h>
int main(){
    int n, i,pi, qi, count = 0;
    scanf("%d", &n);
    for (i = 1; i <= n;i++){
        scanf("%d %d", &pi,&qi);
        if ((qi-pi)>=2)
        
            count++;
    }
        printf("%d\n", count);
    
}