#include<stdio.h>
#include<string.h>
void main(){
    //char arr[] = {'H','e','l','l','o','\0'};
    char arr[] = "hii";
    printf("OUTPUT : %s",arr);
    printf("\nOUTPUT : %c\n",arr[0]);
    printf("OUTPUT :\n");
    for(int i=0;i<3;i++)
    printf("%c",arr[i]);
    printf("\nReverce :\n");
    for(int i=3;i>=0;i--)
        printf("%c",arr[i]);
    printf("\nLENGTH:%d",strlen(arr));
}