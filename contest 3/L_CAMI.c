#include<stdio.h>
#include<math.h>
int main(){
    long long a, b,na,nb;
    double sa,sb;
    for (;;)
    {
        scanf("%lld %lld", &a, &b);
        if(a==0&&b==0){
            break;}
         else  {
        sa = sqrt(a);
        na = (long long)sa;
        if(sa==((long long)sa)){
            na = na - 1;
        sa = sqrt(b);
        nb = ((long long)sb);}
        printf("%lld\n", nb - na);
}}
}