#include<stdio.h>
int main(){
    int sell, cost,profit,loss;//variable
    
    printf("Selling price:");//input taken
    scanf("%d", &sell);
    printf("Cost price:");
    scanf("%d", &cost);


    loss = cost-sell;//calculation
    profit = sell-cost;


    if(sell>cost)//condition
    printf("Hurray!!!! Profit value is:%d",profit);
    else if(cost>sell)
    printf("Alas loss Value:%d", loss);
}