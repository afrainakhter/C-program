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
    int age;//variable
    printf("Enter your age:");
    scanf("%d", &age);//input age
    if (age>18)//check condition 
        printf("Your Are Eligible for license ");
    else
        printf("Wait for Untill 18.......");
}