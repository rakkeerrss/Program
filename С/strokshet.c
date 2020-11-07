#include <stdio.h>
#define MAXLINE 10  // максимальный размер вводимой строки
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

void    copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}
/*печать самой длинной строки*/
int     main(void)
{
    int len;    //длина текущей строки
    int max;    //длина максимальной из просмотренных строк
    char line[MAXLINE];  //текущая строка
    char longest[MAXLINE];  //самая длинная строка
    int c;

    max = 0;
    while ((len = getlin(line, MAXLINE)) > 0)
    {
        if( line[len - 1] != '\n')
            while(( c = getchar()) != EOF && c != '\n')
                len++;
        if ( len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max < MAXLINE)   // вычитаем нулевой символ вставленный в getlin
        max--;
    if (max > 0)
    {
        printf("Самая длинная строка \n");
        if (max > MAXLINE)
            printf("%s...\n", longest);
        else
            printf("%s\n", longest);
    }
    printf("Длина строки - %d символов \n", max);
    return (0);
}