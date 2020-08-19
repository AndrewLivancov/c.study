#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char str[9];

    for (i = 0; i < 8; i++)
        str[i] = '#';
    str[8] = '\0';

    printf("%s\n", str);

    i = 0;
    while (str[i] != '\0')
{
    printf("%c", str[i]);
    i++;
}
    return 0;
}
