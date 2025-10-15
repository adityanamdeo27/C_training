#include<stdio.h>
struct Student{
    char name[10];
    int roll;
};
int main(){
    struct Student s1[5];
    for(int i=0;i<5;i++){
        printf("Enter %d name:",i+1);
        scanf("%s",s1[i].name);
        printf("Enter roll :");
        scanf("%d",&s1[i].roll);
    }
    for(int i=0;i<5;i++){
        printf("Student name : %s",s1[i].name);
        printf("\n");
        printf("Student roll : %d",s1[i].roll);
        printf("\n");
    }
}