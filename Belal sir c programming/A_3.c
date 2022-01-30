#include<stdio.h>
#include<math.h>
int main(){
    float height, length, radius,area,perimeter,circimference,areaCircle;
    int choice;
    printf("1.Ractangle\n");
    printf("2.circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1){
         printf("Enter height:");
    scanf(" %f", &height);
    
    printf("Enter length:");
    scanf(" %f", &length);
    area = height * length;
    perimeter = 2 * (length + height);
    printf("Area of Rectangle is:%.2f\n", area);
    printf("Perimeter of Rectangle is:%.2f", perimeter);
    }

    else if (choice==2){
        printf("Enter radius:");
        scanf(" %f", &radius);
    
    
       areaCircle =M_PI*radius*radius ;
       circimference = 2 *M_PI*radius;
      printf("Area of circle is:%.2f\n", areaCircle);
      printf("Circumfrence of circle is:%.2f",circimference);}
}