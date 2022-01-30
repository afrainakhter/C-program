#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:");
    scanf("%d", &year);
    if(year%400==0 && year%4==00 || year%100!=0)
        printf("Yes\n");
    else
       printf("No\n");
}