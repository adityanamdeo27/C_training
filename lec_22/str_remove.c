#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "hello";
    char tar;
    printf("Enter which character remove :");
    scanf("%c",&tar);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==tar){
            continue;
        }
        else
            printf("%c ",str[i]);
    }
    
    return 0;
}