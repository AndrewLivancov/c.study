#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m[9][9];
   m[2][5] = 3;

   int i,k;
   for (k = 0; k < 9; k++)
    {
        for (i = 0; i < 9; i++)
        {
            m[k][i] = (k + 1) * (i + 1);
            if (k == 5)
                m[k][i] = 5;
            if (i == 3)
                m[k][i] = 3;
            printf("%d\t", m[k][i]);
        }
        printf("\n");
    }

    return 0;
}
