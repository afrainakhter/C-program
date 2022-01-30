#include <stdio.h>

void main()
{int x=1;
if(x--)
    printf("1 ");
     printf("%d\n",x);
if(x--);
     printf("2 ");
     printf("%d\n",x);
if(x--)
    printf("4 ");
     printf("%d\n",x);
if(x--)
    printf("9 ");
    printf("%d\n",x);
  
}