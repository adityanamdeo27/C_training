#include<stdio.h>
int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[n-1]+sum(arr,n-1);
}
int main(){
    int arr[] = {1,2,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int add = sum(arr,n);
    printf("%d",add);
    return 0;
};