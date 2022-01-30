#include <stdio.h>

int main(){
    int x = 3455,last,rev;

    last = x% 10;
    rev = last;

    x = x / 10;
    last = x % 10;
    rev = rev * 10+last;

    x = x / 10;
    last = x % 10;
    rev = rev * 10+last;

    x = x / 10;
    last = x % 10;
    rev = rev * 10+last;

    printf("reverse:%d\n", rev);
}