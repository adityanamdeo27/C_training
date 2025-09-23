#include<stdio.h>
void swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
void main(){
    int x,y;
    printf("Enter a value :");
    scanf("%d",&x);
    printf("Enter a value :");
    scanf("%d",&y);
    swap(&x,&y);
    printf("After swap\n");
    printf("value of a:%d\n",x);
    printf("value of b:%d\n",y);
}