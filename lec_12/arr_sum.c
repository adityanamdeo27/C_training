#include<stdio.h>
void main(){
    int sum = 0;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    printf("sum of array is :%d",sum);
}