
#include <stdio.h>

main() {
  int  i,j, x = 0;
  printf("Enter any number n:");
  scanf("%d", &j);
  for (i = 1; i <=j ; i++) {
      if (j % i == 0) {
         x++;
      }
  }

  if (x == 2) {
  printf("n is a Prime number");
  }
  else {
  printf("n is not a Prime number");
  }
  return 0;
}
