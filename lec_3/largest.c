#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two no.");
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("B is gre");
    }else if(a==b){
        printf("Both are equal");
    }else{
        printf("A is gre");
    }
    return 0;
}