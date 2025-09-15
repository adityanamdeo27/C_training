#include<stdio.h>
int digit_sum(int n){
    int sum = 0;
    if(n<10){
        return n;
    }
    while(n>0){
        int lastdigit = n%10;
        sum = sum + lastdigit;
        n = n/10;
    }
   // return sum;
    return digit_sum(sum);
}
void main(){
    int n,sum = 0;
    printf("Enter a no. :");
    scanf("%d",&n);
    sum = digit_sum(n);
    // while(sum>=10){
    //     sum = digit_sum(sum);
    // }
    printf("last sum :%d\n",sum);
    if(sum==1)
        printf("It is a magic number");
    else
        printf("It is not a magic number");
}