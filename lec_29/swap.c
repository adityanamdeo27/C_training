#include<stdio.h>
int main(){
    int a = 5;
    int b = 1;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a:%d \n",a);
    printf("b:%d \n",b);
    return 0;
}