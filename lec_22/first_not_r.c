#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "happy";
    int count[26] = {0};
    for(int i=0;i<strlen(str);i++){
        count[str[i] - 'a']++;
    }
    for(int i=0;i<strlen(str);i++){
        if(count[str[i] - 'a']==1){
            printf("%c",str[i]);
            break;
    }}
    return 0;
}