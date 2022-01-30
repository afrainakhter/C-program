#include<stdio.h>

int main(){
    int A,B,C,D;
    float E, F ,res;
    scanf("%d %d %f %d %d %f", &A, &B, &E, &C, &D, &F);
    res = (B * E) + (D * F);
    printf("VALOR A PAGAR: R$ %.2f\n", res);
}