#include<stdio.h>
int main(){
    int arr1[] = {1,2,3,4,5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int start=0;
    int ans[5];
    for (int i = 0; i < n; i++) {
        ans[i] = 1;
    }
    l1 :
    if(start>=n) goto l2;
    for(int i=0;i<n;i++){
        if(i==start){
            continue;
        }
        ans[start] *= arr1[i];
    }
    start++;
    goto l1;
    l2:
    for(int i=0;i<n;i++)
        printf("%d ,",ans[i]); 
    return 0;
}