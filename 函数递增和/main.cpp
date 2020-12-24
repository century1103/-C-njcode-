#include<stdio.h>

int S(int x)
{
    int i,s=0;
    for(i=1;i<=x;i++)
        s=s+i;
    return s;
}
int main()
{
    int n,main_s=0;
    scanf("%d",&n);
    main_s=S(n);
    printf("%d",main_s);
}
