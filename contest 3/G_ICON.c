#include<stdio.h>
int main(){
    int T, x, y, z, i;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &x, &y, &z);
        if(x>y && x>z && y+z==x)
            printf("YES\n");
        else if (y > x && y > z && x + z == y)
        printf("YES\n");
        else if (z > x && z > y && x + y == z)
        printf("YES\n");
        else
            printf("NO\n");
    }
}