#include<stdio.h>  
int main(){    
int n,i,m=0,flag=0,T,j;
 scanf("%d", &T);  
for (j = 1; j <= T;j++){
  scanf("%d", &n);    
m=n/2;    
for(i=2;T<=m;i++)    
{    
if(n%i==0)    
{    
printf("yes\n");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("no\n");  }   
return 0;  
 }    