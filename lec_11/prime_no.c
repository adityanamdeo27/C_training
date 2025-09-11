#include<stdio.h>
int prime(int n){
    int mid = n/2;
    int flag = 0;
    for(int i=2;i<=mid;i++){
        if(n%i==0){
            return 0;
        }
        else
            return 1;
    }
    // if(flag == 0)
    //     return n;
    // else 
    //     return 0;
}
void main(){
    int n;
    printf("Enter a no :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(prime(i)){
            printf(" %d\n",i);
        }
    }
}
