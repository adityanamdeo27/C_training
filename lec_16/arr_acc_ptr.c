#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr=arr;
    printf("Forward:\n");
    for(int i=0;i<5;i++)
    printf("%d ,",*(ptr+i));
    printf("\nReverce:\n");
    for(int i=0;i<5;i++)
        printf("%d ,",*(ptr-i+4));
    
}