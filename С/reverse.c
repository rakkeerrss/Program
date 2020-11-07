#include <stdio.h>

#define MAXLINE 1000 //максимальный размер строки

int     reverse(char mas[], int len) //ревер масива
{
    int     i, w;
    char    tmp[MAXLINE];
    
    for (i = 0; i < len; i++)
        tmp[i] = mas[i];
    i -= 2;
    for (w = 0; w < (len - 1); w++, i--)
        mas[w] = tmp[i];
}

int     getlne(char s[], int len) //считает кол. символов и записывает их в масив
{
    int c, i;

    for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s [i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return (i);
}

int     editline(char string[], int len) //заменяет все пробелы и табуляции на один пропел
{                                        // тут создаем масив куда будем перезаписывать строку с одним пробелом
    int i, index, bc;

    for (i = 0, index = 0, bc = 0; i < len; ++i)
    {
        if (string [i] == ' ' || string [i] == '\t')
            ++bc;
        else
        {
            if (bc && index)
            {
                string[index] = ' ';
                ++index;
            }
            string[index] = string[i]; //перезапись масивов
            ++index;
            bc = 0;
        }
    }   
    string[index] = '\0';
    return (index);        //возвращаем перезаписанный масив
}

int     main(void) //функция запуска
{
    int len, max;
    char line[MAXLINE];

    len = max = 0;
    while ((len = getlne (line, MAXLINE)) > 0)
        if ((len = editline (line, len)) > 0 && line [0] != '\n')
        {
            if ((len = reverse (line, len)) > 0 && line [0] != '\n')
                printf("%sДлинна строки: %d\n", line, len - 1);
        }
    return (0);
}