#include<stdio.h>
void main(){
    int n,a=65;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",a++);
        }
        printf("\n");
    }
}