#include<stdio.h>
void main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int a[9];
    int x=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            a[x] = arr[i][j];
            x++; 
    }
    for(int i=0;i<9;i++)
        printf("%d,",a[i]);
}