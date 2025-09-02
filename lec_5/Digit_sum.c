#include<stdio.h>
int main(){
    int n,last,sum=0;
    printf("Enter a no. :");
    scanf("%d",&n);
    for(;n>0;n=n/10){
       last = n%10;
       sum += last;
    }
    printf("%d",sum);
}