#include<stdio.h>
void main(){
    int arr[3][3] = {{7,8,3},{4,5,6},{7,15,14}};
    int min = arr[0][0],max = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
            else if(min>arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    printf("Max :%d\nMin :%d",max,min);
}