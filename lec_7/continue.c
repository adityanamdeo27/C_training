#include<stdio.h>
void main(){
    for(int i=0;i<5;i++){
        if(i==3){
            continue;
        }
        printf("%d ",i);
    }
}