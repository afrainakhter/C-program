#include<stdio.h>
int main()
{
    int i,n1,n2 ,num,sq1,sq2,rev1=0,rev2=0,sum=0;

    printf("give first number: ");
    scanf("%d",&n1);
     printf("give last number: ");
    scanf("%d",&n2);
    for(i=n1;i<=n2;i++)
    {
    num=i;
    sq1=num*num;
  
    while(num>0)
    {
        rev1=rev1*10;
        rev1=rev1+(num%10);
        num=num/10;
    }
    sq2=rev1*rev1;
    while(sq2>0)
    {
        rev2=rev2*10;
        rev2=rev2+(sq2%10);
        sq2=sq2/10;
    }
    if(sq1==rev2)
    printf("%d ",num);
    }
  
}