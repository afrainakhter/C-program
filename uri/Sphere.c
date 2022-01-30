#include<stdio.h>
#include<math.h>
int main(){
    double R,c;
    scanf("%lf", &R);
    c = (4.0/ 3) * 3.14159 * (R * R * R);
    printf("VOLUME = %.3lf\n", c);
}