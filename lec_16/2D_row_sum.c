#include<stdio.h>
void main(){
    int arr[3][3] = {{7,8,3},{4,5,6},{7,15,14}};
    for(int i=0;i<3;i++){
        int row_sum = 0;
        for(int j=0;j<3;j++){
            row_sum += arr[i][j];
        }
        printf("\n Sum of %d is %d",i,row_sum);
    }
}