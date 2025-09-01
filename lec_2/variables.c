#include<stdio.h>
int main(){
    int a = 5;
    float b = 5.5;
    char ch = 'A';
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",ch);
    printf("Size of int :%d\n",sizeof(a));
    printf("Size of float :%d\n",sizeof(b));
    printf("Size of char :%d\n",sizeof(ch));
    return 0;
}