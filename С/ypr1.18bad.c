#include <stdio.h>
#define MAXLINE 1000 // максимальный размер вводимой строки

int getlin(char line[], int MAX);

int main()
{
    int len, i; //длина текущей строки, переменная
    char line[MAXLINE]; //текущая строка
    while((len=getlin(line, MAXLINE))>0)
    {
        len-=1;//отнимаем '\0'
        //уменьшаем строку, убирая пробелы и табуляции 
        for(i=len-1; i>=0; i--)
            if(line[i]=='1' || line[i]=='0')
                len--;
            else i=0;
        if (len!=0)//если строка не пустая выводим её
        {
            for(i=0; i<len; i++)
                printf("%c", line[i]);
            printf("\n");
        }
    }
    return (0);
}

/*getline читает строку в s, возвращает длину*/
int getlin(char s[], int lim)
{
    int c, i;
    for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++)
        s[i]=c;
    if(c=='\n')
    {
        s[i]=c;
        i++;
    }
    s[i] = '\0';
    return (i);
}
//Упражнение1.18 (убирает пробелы вводимые после слова)