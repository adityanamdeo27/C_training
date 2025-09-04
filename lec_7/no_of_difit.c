#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(i=0;n>0;n=n/10){
        i++;
    }
    printf("No of digit is %d",i);
    return 0;
}