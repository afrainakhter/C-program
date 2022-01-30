#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int a, b, c,miorAB,minor;
    scanf("%d %d %d", &a, &b,&c);
    miorAB = (a + b+ abs(a - b)) / 2;
    minor=(miorAB + c + abs(miorAB - c)) / 2;
  
    printf("%d eh o maior\n", minor);
}