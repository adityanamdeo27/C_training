#include <stdio.h>
int pro(int a)
{
    if (a == 1)
        return 1;
    return a * pro(a-1);
}
int main()
{
    int fact = pro(5);
    printf("%d",fact);
    return 0;
}