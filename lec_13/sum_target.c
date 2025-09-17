#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int target = 3;
    for(int i=0;i<5;i++){
        for(int j=1;j<5;j++)
        if(arr[i]+arr[j]==target){
            printf("found at index :%d , %d",i,j);
            break;
        }
    }
}