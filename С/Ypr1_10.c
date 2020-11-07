#include <stdio.h>

int     main(void)
{
    int i;
    while ((i = getchar()) != EOF)
    {
        if (i == '\t')
        {
            printf("\\b");
            while ((i = getchar()) == '\t')
                printf("\\b");
        }
        putchar(i);
    }
    return (0);
}