#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "madam";
    int ln = strlen(str);
    for(int i=0;i<ln/2;i++)
        if(str[i]!=str[ln-i-1]){
            printf("Not palindrom");
            return 0;
        }
    printf("palindrom");
    return 0;
}