#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int T, i, myposition, lift_position, sec_time;
    scanf("%d", &T);
    for ( i = 1; i <=T; i++)

    {
        scanf("%d %d", &myposition, &lift_position);
        sec_time =abs(myposition - lift_position);
        printf("Case %d: %d\n", i, (sec_time * 4) + 19 + (myposition * 4));
    }
}