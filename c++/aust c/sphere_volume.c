#include<stdio.h>
int main()
{
     float r;
     float volume_sphere;
     printf("Enter Radius : ");
     scanf("%f",&r);
     volume_sphere = (4/3)*3.14*r*r*r;
     printf("the input volume if sphere :%f ",r);
     printf("\nThe Volume of Sphere = %f",volume_sphere);
     return 0;
}
