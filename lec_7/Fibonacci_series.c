#include<stdio.h>
void main(){
int n;
int t1=0,t2=1;
printf("Enter a no. of term:");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("%d ",t1);
    int next = t1+t2;
    t1 = t2;
    t2 = next;
}
}