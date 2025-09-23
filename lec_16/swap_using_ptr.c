#include<stdio.h>
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    // printf("After swap\n");
    // printf("value of a:%d",x);
    // printf("value of b:%d",y);
}
void main(){
    int x,y;
    printf("Enter a value :");
    scanf("%d",&x);
    printf("Enter a value :");
    scanf("%d",&y);
    swap(&x,&y);
    printf("After swap\n");
    printf("value of a:%d",x);
    printf("value of b:%d",y);
}