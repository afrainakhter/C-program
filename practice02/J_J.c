#include<stdio.h>
int main(){
    int T, a, b, c;
    scanf("%d %d %d %d", &T,&a,&b,&c);
    
    if (b > a && a > c||c>a && a>b)

        printf("Case 1: %d\n",a);

    else if(a>b && b>c||c>b && b>a)

        printf("Case 2: %d\n", b);

     else if(a>c && c>b||b>c&&c>a )
     
         printf("Case 3: %d\n", c);
     return 0;
}