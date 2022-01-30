#include<stdio.h>
char ch;
void charecter();
int main()
{
    charecter();
    printf("%c", ch);
}
void charecter()
{
    scanf("%c", &ch);
}