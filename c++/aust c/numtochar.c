#include <stdio.h>
int main() {  
    int d;
    printf("Enter a Number: ");
    scanf("%d", &d);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("Chatecter code value of %d = %c", d, d);
    
    return 0;
}