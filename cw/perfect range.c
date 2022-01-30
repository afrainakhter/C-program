# include <stdio.h>
int main(){
  int n,i,sum;
  int min,max;

  printf("Enter the  range: ");
  scanf("%d%d",&min,&max);


  printf("Perfect numbers in given range is: ");
  for(n=min;n<=max/2;n++){
    i=1;
    sum = 0;

    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }

    if(sum==n)
      printf("%d ",n);
  }

  return 0;
}
