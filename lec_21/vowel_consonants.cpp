#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "aasdfghj";
    int vowel=0,consonents=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }else
            consonents++;
    }
    printf("vowel : %d \nconsonent : %d",vowel,consonents);
    return 0;
}