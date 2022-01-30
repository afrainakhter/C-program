#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    long long int N1,N2,def;
    while (scanf("%lld %lld",&N1,&N2)==2)

    {
        def =llabs(N2 - N1);
        printf("%lld\n", def);
    }
    return 0;
}