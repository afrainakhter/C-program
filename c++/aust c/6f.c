#include <stdio.h>
int sum();
int main()

{
    int num;
    num = sum();

    printf("Sum = %d\n", num);

  
}
int sum(){
     int n, sum = 0, c, array[100];
     scanf("%d", &n);

   for (c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
      sum = sum + array[c];
  
   }
   return sum;
}