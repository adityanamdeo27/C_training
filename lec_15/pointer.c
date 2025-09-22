#include<stdio.h>
void main(){
    int x = 5;
    int *a = &x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",a);
    printf("%d\n",*a);
}