 #include<stdio.h>
 int main()
 {
     int num, sum=0,i=1;

     printf("Enter Number: ");
     scanf("%d",&num);

     while(i<=num/2)
     {
         if(num%i==0)
             sum+=i;
             i++;
     }

     if( sum==num )
         printf("%d is a perfect number.\n",num);
     else
         printf("%d is not a perfect number.\n",num);

     return 0;
 }
