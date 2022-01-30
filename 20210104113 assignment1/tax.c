/* 
Course name: Elementary Structure Programming
Assignment No:01
Semester:1.1
Course Code:1102
Name:Afrain Akhter Nur
ID:20210104113
Group:C1

*/



#include<stdio.h>
int main(){
    float salary;
    printf("Enter your Salary:");
    scanf("%f", &salary);
    if(salary>=9000)
        printf("Income tax:%.2f", salary * .40);
    else if(salary>=7500)
        printf("Income tax:%.2f", salary * .30);
    else if(salary<7500)
        printf("Income tax:%.2f", salary * .20);
}