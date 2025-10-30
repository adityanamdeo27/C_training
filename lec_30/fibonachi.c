#include <stdio.h>
int fibonacchi(int a)
{
    if(a==0){
        return 0;
    }else if(a==1){
        return 1;
    } else if(a==2){
        return 1;
    }
    return fibonacchi(a-1) + fibonacchi(a-2);
}
int main()
{
    int fibo = fibonacchi(3);
    printf("%d",fibo);
    return 0;
}