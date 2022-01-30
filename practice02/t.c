#include<stdio.h>


int main(){
    unsigned long int N1,N2;
    while (scanf("%lu %lu",&N1,&N2)==2)
{
    if(N1>N2)
                printf("%lu\n",(N1-N2));
        else
                printf("%lu\n",(N2-N1));
 
    }
       

    
    return 0;
}