/*Afrain Akhter Nur
20210104113
sem:1.1(spring)
group=c1
*/


#include<stdio.h>
int main()

{
int n,i,f=1;

printf("Enter the No:");

scanf("%d",&n);

for(i=1;i<=n;i++)

{

f=f*i;

}

printf("%d=factorial ",f);

}