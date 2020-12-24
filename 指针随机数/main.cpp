#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main()
{
    int i,a[10]={0},max=0;
    srand(time(0));
    for(i=0;i<10;i++)
    {
        a[i]=rand();
    }
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");
    int *pa;
    for(pa=a;pa<a+10;pa++)
    {
        if(max<*pa)
            max=*pa;
    }
    printf("%d",max);
}
