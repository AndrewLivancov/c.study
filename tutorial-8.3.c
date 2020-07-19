#include <stdio.h>
#include <stdlib.h>

void proc1(int x)
{
    if (x < 10)
        printf("%d\n", x);
    else
        printf("error\n");
}

int func1(int a, int b)
{
    if (a > b)
        return 1;
    else
        return 0;
}

int main()
{
    int t;

    proc1(5);
    proc1(15);

    t = func1(30, 20);
    proc1(t);

    return 0;
}
