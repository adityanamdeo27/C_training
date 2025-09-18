#include<stdio.h>
void main(){
    int arr [6] = {1,2,3,4,6,7};
    int n = sizeof(arr)/sizeof(int);
    for(int i=1;i<=n;i++){
        if(arr[i]-arr[i-1]!=1){
            printf("missing no. is  b/w %d\n",i);
        }
    }
}