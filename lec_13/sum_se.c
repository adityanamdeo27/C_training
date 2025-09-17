#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int k,maxsum=0,windowsum;
    printf("Enter a no. :");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        windowsum+=arr[i];
    }
    for(int j=k;j<n;j++){
        windowsum=windowsum+arr[j]-arr[j-k];
        if(maxsum<windowsum){
            maxsum=windowsum;
        }
    }
    printf("max : %d",maxsum);
}