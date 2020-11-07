#include <stdio.h>
#define MAXLINE 1000  // максимальный размер вводимой строки
/*getlin читает строку в s, возвращает длину*/
int getlin(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if ( c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return (i);
}

int     print(char ss[], int dd)
{
    printf("%sСимволов в строке: %d\n", ss, dd);
    return (0);
}

int     main(void)
{
    int len;    //длина текущей строки
    char line[MAXLINE];  //текущая строка

    while ((len = getlin(line, MAXLINE)) > 0)
    {
        if (len > 80)
        {
            len--;
            print(line, len);
        }
    }
    return (0);
}