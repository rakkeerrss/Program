#include <stdio.h>

int     temper(int foren)
{
    float crad;

    crad = (foren - 32) / 1.8; 
    printf("Cradusov: %.2f\n", crad);
    return (0);
}

int     main(void)
{
    int c;

    c = 0;
    printf("Forengeit: ");
    if ((c = getchar()) != EOF)
        c = c - '0';
        temper(c);
}