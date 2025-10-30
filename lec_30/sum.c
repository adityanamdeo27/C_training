#include <stdio.h>
int sum(int a)
{
    if (a == 1)
        return 1;
    return a + sum(a-1);
}
int main()
{
    int add = sum(5);
    printf("%d",add);
    return 0;
}