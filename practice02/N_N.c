#include<stdio.h>
#include<math.h>
int main(){
    int i, T = 1;
    double R;
    scanf("%d", &i);
    while (i--)
    {
        scanf("%lf", &R);
        printf("Case %d: %.2f\n", T++, 4.0*R * R - M_PI * R * R);
    }
}