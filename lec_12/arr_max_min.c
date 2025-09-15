#include<stdio.h>
void main(){
    int arr[5] = {5,0,1,9,3};
    int max = 0,min = arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("Max element in arr is :%d\n",max);
    printf("Min element in arr is :%d",min);
}