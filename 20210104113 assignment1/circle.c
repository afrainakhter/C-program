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
#include<math.h>

int main(){
    float r, area, circumference;//variable indentify
    int choice;
    printf("Enter Radius of Cricle:");
    scanf("%f", &r);//take input radius of circle

    area = M_PI * r * r;
    circumference = 2 * M_PI * r;
    
    printf("1.Area\n");
    printf("2.Circumfrence\n");
    printf("Enter your choice:");
    scanf("%d", &choice);//take choice
    
    
    if (choice==1)//check condition
    printf("Area of circle is : %f",area);
    else if (choice==2)

       
    printf("Area of Circumfrence is : %f",circumference);

     else 
     printf("Invalid choice");

}