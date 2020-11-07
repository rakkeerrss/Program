#include <stdio.h>

#define INE 1
#define ONE 0

int     main(void)
{
    int i, c, w;

    i = w = ONE;
    while((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            i++;
            w = INE;
            printf("*");
        }
        else if (w == INE)
        {
            printf("\n");
            w = ONE;
        }
    }
}