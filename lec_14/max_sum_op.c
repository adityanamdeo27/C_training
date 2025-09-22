#include<stdio.h>
void main(){
    int arr[] = {5,0,7,-8,9};
    int n = sizeof(arr)/sizeof(int);
    int current=0,max = arr[0];
    for(int i=0;i<n;i++){
        current += arr[i];
        if(max<current)
            max = current;
        if (current < 0)
            current = 0;  // reset current, not max
    }
    printf("max :%d",max);
}