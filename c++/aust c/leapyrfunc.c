#include<stdio.h>
int leapyear(int year);
int main()
{
    int year,res;
    printf("Enter a year:");
    scanf("%d", &year);
    res = leapyear(year);
    if(res==1)
    printf("leapyear");
    else
       printf("not a leapyear");
}

int leapyear(int year){


    if(year%400==0 && year%4==00 || year%100!=0)
        return 1;
    else
        return 0;

}