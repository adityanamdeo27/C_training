#include<stdio.h>
int main(){
    int arr[] = {1,2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int xor = 0,xor1 = 0;
    for(int i=1;i<=n;i++){
        xor = xor ^i;
    }
    for(int i =0;i<n-1;i++){
        xor1 = xor1^arr[i];
    }
    printf("%d",xor^xor1);
    return 0;
}