#include<stdio.h>
void main(){
    int arr[] = {5,0,7,-8,9};
    int n = sizeof(arr)/sizeof(int);
    int current=0,max = arr[0];
    for(int i=0;i<n;i++){
        current += arr[i];
        if(max<current)
            max = current;
        if(max<0)
            max = 0;
    }
    printf("max :%d",max);
}