#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int temp = arr[0];
    for(int i=0;i<n;i++){
        arr[i] = arr[i+1];
   }
    arr[n-1] = temp;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}