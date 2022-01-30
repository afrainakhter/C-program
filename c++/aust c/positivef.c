#include<stdio.h>
int n1;
void positive();
int main()
{
    positive(n1);
    if(n1==0)
        printf("Zero");
    else{
        if (n1 > 0)
        {
            printf("Positive");
        }
        else
            printf("Negative");
    }
}
void positive()
{
    scanf("%d", &n1);
}