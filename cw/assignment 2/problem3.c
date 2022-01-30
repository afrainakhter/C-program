/*Afrain Akhter Nur
20210104113
sem:1.1(spring)
group=c1
*/


#include <stdio.h>
int main()
 {
    int i,n;
    printf("Input number of terms : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
 }
