#include<stdio.h>
int main(){
    for(int i=2;i<10;i++){
        if (i%2==0)
            printf("%d is Even \t",i);
        else
            printf("%d is Odd \t",i);
    }
    return 0;
}