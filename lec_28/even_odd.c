#include<stdio.h>
int main(){
    int n = 4;
    int bitMask = 1;
    n = n&bitMask;
    if(n)
        printf("Odd");
    else
        printf("Even");

    return 0;
}