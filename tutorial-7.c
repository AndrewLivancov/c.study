#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mas[10];
    mas[0] = 555;
    mas[1] = 111111;
    mas[2] = 777;
    i = 0;
    while (i < 10)
    {
        printf("%d = %d\n", i, mas[i]);
        i = i + 1;
    }
    return 0;
}
