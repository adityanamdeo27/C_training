#include<stdio.h>
void main(){
    int n,a=65;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf(" %c",a++);
        }
        printf("\n");
    }
}