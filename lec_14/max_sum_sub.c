#include<stdio.h>
void main(){
    int arr[7] = {0,5,-5,3,-4,-5,-7};
    int n = sizeof(arr)/sizeof(int);
    int max_sub = arr[0];
    for(int i=0;i<n;i++){
        int current = 0;
        for(int j=i;j<n;j++){
            current += arr[j];
            if(max_sub<current){
                max_sub = current;
            }
        }
        printf("%d ,",current);
    }
    printf("\n maximum is : %d ",max_sub);
}