#include<stdio.h>
int main(){
    int n,res=0;
    printf("Enter a no. :");
    scanf("%d",&n);
    while (n!=0)
    {
        int lastdigit = n%10;
        res =res*10 + lastdigit;
        n = n/10;
    }
    printf("Reverce of your no. : %d",res);
    return 0;
}