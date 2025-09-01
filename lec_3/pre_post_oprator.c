#include<stdio.h>
int main(){
    int a =5;
    int b =3;
    int sum = a++ + --b;
    printf("%d",a++);
    printf("%d",a);
    return 0;
}