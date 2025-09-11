#include<stdio.h>
int sum(){
    int a=5,b=5,c;
    c = a+b;
    printf("%d",c);
    return 0;
}
void main(){
    int sum(); //initilized
    sum(); //call
}