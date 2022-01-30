#include<stdio.h>
#include<math.h>
int main(){
   long long int a, b, c;
    scanf("%lld %lld %lld", &a,&b,&c);
    if (a == 0 &&b == 0 &&c == 0)
        printf("");
    else
    {
        if(pow(a,2)+pow(b,2)==pow(c,2))
       { printf("right\n");}
else
    printf("wrong\n");
    }
return 0;
}