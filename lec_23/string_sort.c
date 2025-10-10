#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "bca";
    int count[26] = {0};
    for(int i=0;i<strlen(str);i++){
        count[str[i] - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0)
        printf("%c ",i+97);
    }
    return 0;
}