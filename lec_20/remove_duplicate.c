#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "madam";
    int n = strlen(str);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                str[i] = 1;
            }
        }
    }
    printf("%s",str);
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int n = strlen(str);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; ) {
            if(str[i] == str[j]) {
                // Shift characters left
                for(int k = j; k < n; k++) {
                    str[k] = str[k + 1];
                }
                n--; // Reduce length
            } else {
                j++;
            }
        }
    }

    printf("%s\n", str);
    return 0;
}
*/