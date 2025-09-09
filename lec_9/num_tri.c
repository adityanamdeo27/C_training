#include<stdio.h>
void main(){
    int n,a=1;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        // for(int j=0;j<=i;j++){
        //     printf("%d ",a++);
        // }
        int j=0;
        while(j<=i){
            printf("%d ",a++);
            j++;
        }
        printf("\n");
    }
}