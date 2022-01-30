#include <stdio.h>
int main()
{
    int a, b, c, x, y, z;
    scanf("%d %d %d", &a, &b, &c);
   
   if(a>=1&&c<=6){
    if( a == 1)
    {
        x = 6;
    }
    else if( a == 2)
    {
        x = 5;
    }
    else if( a == 3)
    {
        x = 4;
    }
    else if( a == 4)
    {
        x = 3;
    }
    else if( a == 5)
    {
        x = 2;
    }
    else if( a == 6)
    {
        x = 1;
    }
    if( b == 1)
    {
        y = 6;
    }
    else if( b == 2)
    {
        y = 5;
    }
    else if( b == 3)
    {
        y = 4;
    }
    else if( b == 4)
    {
        y = 3;
    }
    else if( b == 5)
    {
        y= 2;
    }
    else if( b == 6)
    {
        y = 1;
    }
    if( c==1)
    {
        z = 6;
    }
    else if( c == 2)
    {
        z= 5;
    }
    else if( c == 3)
    {
        z = 4;
    }
    else if( c == 4)
    {
        z = 3;
    }
    else if( c == 5)
    {
        z = 2;
    }
    else if( c == 6)
    {
        z = 1;
    }
    printf("%d\n", x + y + z);
   }
}