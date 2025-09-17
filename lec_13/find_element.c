#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int target = 5;
    for(int i=0;i<5;i++){
        if(arr[i]==target){
            printf("found at index :%d",i);
            break;
        }
    }
}