#include<stdio.h>

int main()
{
    int a[3][3]={{8,2,3},{0,2,6},{0,0,3}};
    int (*p)[3];
    int sum=0,i;
    p=a;
    for(i=0;i<3;i++)
        sum=sum+*(*(p+i)+i);
    printf("%d",sum);
}
