#include <stdio.h>
//программа выводит самую длинную строку
#define MAXLINE 1000

int     max;//длина максимальной строки из просмотренных строк
char    line[MAXLINE];//текущая строка
char longest[MAXLINE];//самая длинная строка

int     fgetline(void) //считает кол. символов в строке и записывает в масив line
{
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return (i);
}

void    copy(void)//перезаписыват масив с line в longest
{
    int     i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        i++;
}

int     main(void)//вызывает функции и печатает результат
{
    int     len;
    extern  int max;
    extern  char longest[];

    max = 0;
    while ((len = fgetline()) > 0)
    if (len > max)
    {
        max = len;
        copy();
    }
    if (max > 0)
        printf("%s", longest);
    return (0);
}