#include<stdio.h>
int main(){
    int a;
    printf("Enter a no.(1-7):");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday\n");
       break;
    
    default:
    printf("Kuch nahi..bad me milte he");
    }
    return 0;
}