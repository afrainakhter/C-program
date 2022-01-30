#include<stdio.h>
int main(){
    int T,total=0,rem,count,sum,e,f,c;
    scanf("%d", &T);
    for (int i = 0; i < T;i++){
       
        scanf("%d %d %d", &e, &f, &c);
        sum = e + f;
        total = 0;
        rem = sum % c;
    while(sum>=c){
        count = sum / c;
        sum = count + rem;
        rem = sum % c;
        total += count;
    }
    printf("%d\n", total);
}}