#include <stdio.h>
#include <math.h>
int main() {
    int T,i,N,A;
    scanf("%d\n",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d\n",&N);
        A=sqrt(N);
        printf("%d\n",A);
    }
	
	return 0;
}
