#include<stdio.h>
int main(){
    int n,s,sum=0,conunter=0,i;
    scanf("%d", &n);
    for (i = 0; i < n;i++)
    {
        scanf("%d", &s);
        if(s>=0)
            sum += s;
            else{
                if(sum==0)
                    conunter++;
                else
                    sum--;

            }
    }
    printf("%d", conunter);
}