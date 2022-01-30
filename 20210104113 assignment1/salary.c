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
    int code,basic_salary;
    float  HRA, DA, CCA, GS, PF, IT, NS;
    char name;
    printf("Enter employee Code:");
    scanf("%d", &code);
    printf("Enter employee Name:");
    scanf("%s", &name);
    printf("Enter employee  Salary:");
    scanf("%d", &basic_salary);

    printf("        \t\t\t**************************  \n         ");


    printf("\nEmployee CODE:%d\n", code);
    printf("Employee Name:%d\n",name);
     printf("Employee Salary:%d\n",basic_salary);
   
    HRA = basic_salary * .4;
    DA = basic_salary * .1;
    CCA = basic_salary * .05;
    GS = basic_salary + HRA + DA + CCA;
    PF = GS * .1;
    IT =GS * .1;
    NS = GS - (PF + IT);
    printf("\nHRA=%.2f\n", HRA);
    printf("DA=%.2f\n", DA);
    printf("CCA=%.2f\n", CCA);
    printf("GS=%.2f\n", GS);
    printf("PF=%.2f\n", PF);
    printf("IT=%.2f\n", IT);
    printf("NS=%.2f\n", NS);
}
