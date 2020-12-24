#include<stdio.h>

int S(int a[3][3])
{
    int i,j,s=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            s=s+a[i][j];
    }
    return s;
}
int main()
{
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    sum=S(b);
    printf("%d",sum);
}
