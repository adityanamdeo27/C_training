#include<stdio.h>
int main(){
    int arr[] = {7,5,3,1,4};
    int maxBuy = 0;
    int minBuy = arr[0];
    for(int i=1;i<6;i++){
        if(minBuy>arr[i])
            minBuy = arr[i];
        else{
            int profit = arr[i] - minBuy;
            if(profit>maxBuy)
                maxBuy = profit;
        }
    }
    printf("%d",maxBuy);
    return 0;
}