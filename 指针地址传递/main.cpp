#include<stdio.h>

int fun(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    return *a,*b;
}
int main()
{
    int m,n,x,y;
    int(*p)(int*,int*);
    p=fun;
    scanf("%d%d",&m,&n);
    fun(&m,&n);
    printf("%d %d",m,n);
}
