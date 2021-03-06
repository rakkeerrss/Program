#include <stdio.h>

int main(void)
{
    int ascii[128];     /* коды ASCII таблицы от 0 до 127 */
    int c = 0;
    int i, j;

    for (i = 0; i < 128; ++i)   /* заполняем массив нолями */
        ascii[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c < 128)    /* только стандартная таблица ASCII */
            ++ascii[c]; /* прирост гистрограммы */
    }

    /* Печать гистрограммы частот встречаемости вводимых символов */

    /* Учитывать будем только символы, которые можно ввести
     * с клавиатуры, кроме BS (backspace - клавиша <Enter>)
     * TAB (horizontal tab) и т.д.,
     * тоесть, символы которые имеют коды в диапазоне [32; 127]*/
    for (i = 32; i < 127; ++i)
    {
        if (ascii[i] > 0)       /* был ли символ введен хоть раз*/
        {
            printf("\"");
            putchar(i); /* вывод символов - параметров гистрограммы */
            printf("\": ");

            /* печать гистрограммы */
            for (j = 1; j <= ascii[i]; ++j)
                printf("*");
            printf("\n");
        }
    }

    return (0);
}