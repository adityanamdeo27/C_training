#include <stdio.h>
void sum(int a)
{
    if (a == 0)
        return;
    sum(a--);
    printf("%d ", a);
}
int main()
{
    sum(5);
    return 0;
}