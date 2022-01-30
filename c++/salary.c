/* jamis basic salary is input from user
 he gets 35% allowance of basic salary for hosue rent and
 5% for medical allowance he get 1000 tk for Tech all
*/
#include<stdio.h>
int main(){
    float basic, gross;
    printf("enter basic salaly:");
    scanf("%f", &basic);
    gross = basic + (basic * 35 / 100) + (basic * 5 / 100) + 10000;
    printf("your ");
}