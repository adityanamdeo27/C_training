#include<stdio.h>
void binary(int arr[],int n,int key){
    int start=0,end=n-1;
    while (start<=end)
    { int mid = (start+end)/2;
      if(arr[mid]==key){
        printf("Index is %d",mid);
        return; }
    else if(arr[mid]<key)
        start = mid +1;
    else if(arr[mid]>key)
        end = mid-1;
      }
        printf("Invalid");
}

void main(){
    int arr[5] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    int key,a;
    printf("Enter a key :");
    scanf("%d",&key);
    binary(arr,n,key);
}