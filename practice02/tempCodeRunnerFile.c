#include<stdio.h>
int main(){
    int Y;
    scanf("%d", &Y);
    if(Y%400==0 && Y%4==00 || Y%100!=0)
        printf("Yes\n");
    else
       printf("No\n");
    return 0;
}