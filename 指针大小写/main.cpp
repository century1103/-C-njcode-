#include<stdio.h>

int main()
{
    char *pa;
    char str[100];
    gets(str);
    pa=str;
    while(*pa!='\0')
    {
        if(*pa>='a'&&*pa<='z')
            *pa=*pa-32;
        putchar(*pa);
        pa++;
    }
}
