#include<stdio.h>
int main(){
    int a = 10, b = 30, c;
    c = b;
    b = a;
    a= c;
    printf("%d\n%d",a, b);
    
}