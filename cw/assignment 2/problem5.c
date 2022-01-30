/*Afrain Akhter Nur
20210104113
sem:1.1(spring)
group=c1
*/




#include<stdio.h>
int main(){
  int i, num2 ,num1,sum=0;
  

  printf("Enter the  numbers: ");
  scanf("%d%d", &num1, &num2);

  printf("Num %d %d are: \n", num1,num2);
  for (i = num1; i <= num2; i++){
    if(i%2==0){
    if (i % 3 == 0 && i % 5 != 0){

        sum = sum + i;
        
    }
  }}
  printf("%d", sum);
  return 0;
}