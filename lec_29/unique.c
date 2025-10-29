#include<stdio.h>
int main(){
    int arr[] = {2,2,5,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int xor = 0;
    for(int i=0;i<n;i++){
        xor = xor^arr[i];
    }
    printf("%d",xor);
    return 0;
}