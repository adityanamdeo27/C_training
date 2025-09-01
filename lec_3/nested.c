#include<stdio.h>
int main(){
    int marks,attendance;
    printf("Enter marks :");
    scanf("%d",&marks);
    printf("Enter attendance:");
    scanf("%d",&attendance);
    if(marks>75 && attendance >75){
        printf("A");
    }else if(marks>65 && attendance >65){
        printf("B");
    }else if(marks>40 && attendance >75){
        printf("C");
    }else{
        printf("Fail");
    }
    return 0;
}