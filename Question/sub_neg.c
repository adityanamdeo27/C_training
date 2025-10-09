#include<stdio.h>
void main(){
    int arr[] = {1,-2,3,-4,-5,6,-7,-8,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    for(int i=0;i<=n-k;i++){
        int found=0;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                printf("%d,",arr[j]);
                found=1;
                break;
            }
        }
    if(!found)
        printf("0,");
    }
}