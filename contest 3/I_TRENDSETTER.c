#include<stdio.h>
int main(){
    int temp, T, o, a, i;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d %d", &o, &a, &i);
        if(o<a){
        temp = o;
        o = a;
        a = temp;
        }
    if(o>(a+i)){
        printf("%d\n", o - (a + i));
    }
    else
            printf("%d\n", 0);
}}