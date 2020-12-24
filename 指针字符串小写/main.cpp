#include<stdio.h>

int main()
{
    char str[1000],*cp;
    int d=0;
    gets(str);
    for(cp=str;*cp!='\0';cp++)
    {
        if(*cp>='a'&&*cp<='z')
            d=d+0;
        else
            d=d+1;
    }
    if(d==0)
        printf("TRUE");
    else
        printf("FALSE");
}
