#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)==2&&a!=0&&b!=0){
		int count;
		int i;
		for(i=a,count=0;i<=b;i++){
			if((int)sqrt((double)i)==(double)sqrt((double)i))
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}