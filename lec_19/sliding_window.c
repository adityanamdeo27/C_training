#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int k ,wsum=0,max;
    printf("Enter a no.:");
    scanf("%d",&k);
    for(int i=0;i<k;i++)
        wsum += arr[i];
    max = wsum;
    for(int i=k;i<5;i++){
        wsum += arr[i]-arr[i-k];
        if(wsum>max){
            max = wsum; 
        }
    }
    printf("MAX :%d",max);
}