#include<stdio.h>

int main()
{
    int a[4][4]={0};
    int b[2][2]={0};
    int *p=&a[0][0];
    int M,i;
    scanf("%d",&M);
    a[0][0]=M;
    for(i=0;i<=16;i++)
        *(p+i+1)=*(p+i)+1;
    b[0][0]=*(p+5);
    b[0][1]=*(p+6);
    b[1][0]=*(p+9);
    b[1][1]=*(p+10);
    printf("%d %d\n",b[0][0],b[0][1]);
    printf("%d %d\n",b[1][0],b[1][1]);
}
