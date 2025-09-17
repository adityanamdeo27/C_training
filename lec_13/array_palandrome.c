#include<stdio.h>
int main(){
    int arr[4] = {1,2,7,1};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
            printf("This array is not a palandrome");
            return 0;
        }
    }
    printf("This array is a palandrome");
    return 0;
}