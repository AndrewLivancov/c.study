#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    int i;
    printf("input x=");
    scanf("%f", &x);
    printf("input y=");
    scanf("%f", &y);

    printf("operand: \n1 = *\n2 = +\n3 = /\n4 = -\nselect code = ");
    scanf("%d", &i);

    if (i == 1)
        printf("%g * %g = %g", x, y, x * y);

    if (i == 2)
        printf("%g + %g = %g", x, y, x + y);

    if (i == 3)
        printf("%g / %g = %g", x, y, x / y);

    if (i == 4)
        printf("%g - %g = %g", x, y, x - y);

    return 0;
}
