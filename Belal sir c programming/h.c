#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
   if(n>=1 && n<=2000){
   
    switch (n)
    
    {
    case 1 ... 4:
        printf("few\n");

        break;
        case 5 ... 9:
        printf("several\n");

        break;case 10 ... 19:
        printf("pack\n");

        break;case 20 ... 49:
        printf("lots\n");

        break;case 50 ... 99:
        printf("horde\n");

        break;
        case 100 ... 249:
        printf("throng\n");

        break;
        case 250 ... 499:
        printf("swarm\n");

        break;
        case 500 ... 999:
        printf("zounds\n");

        break;
        

    default:
        printf("legion\n");
        break;
    }}
}