#include<stdio.h>
int main(){
    int arr[30];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n;i++){
        scanf("%d", &arr[i]);

    }
    for (i = n-1; i >= 0;i--){
        printf("%d\t",arr[i]);
    }
}