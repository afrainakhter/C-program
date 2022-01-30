#include <stdio.h>
#include<math.h>

int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);
if((x!=0) &&  (x&(x-1))==0){
    printf(" number is a power of two");
    }
else if (x==0)  {
    printf("Number is 0");

} 



else
    printf("Number is not a power of 2");
}
