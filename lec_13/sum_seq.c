#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int k,maxsum=0;
    printf("Enter a no. :");
    scanf("%d",&k);
    for(int i=0;i<=n-k;i++){
        int currentsum=0;
        for(int j=i;j<k+i;j++){
            currentsum += arr[j];
        }
        if(maxsum<currentsum){
            maxsum = currentsum;
        }
    }
    printf("max : %d",maxsum);
}