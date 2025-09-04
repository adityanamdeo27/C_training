#include<stdio.h>
void main(){
int n;
int t1=0,t2=1;
printf("Enter a no. of term:");
scanf("%d",&n);
int i = 0;
while(i<n){
    printf("%d ",t1);
    int next = t1+t2;
    t1 = t2;
    t2 = next;
    i++;
}
}