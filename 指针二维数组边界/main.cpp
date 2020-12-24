#include<stdio.h>
int main()
{
    int a[4][4]={0};
    int N,sum=0;
    int *p=&a[0][0];
    int i;
    scanf("%d",&N);
    a[0][0]=N;
    for(i=0;i<16;i++)
    {
        *(p+i+1)=*(p+i)+1;
    }
    sum=*p+*(p+1)+*(p+2)+*(p+3)+*(p+4)+*(p+7)+*(p+8)+*(p+11)+*(p+12)+*(p+13)+*(p+14)+*(p+15);
    printf("%d",sum);
}
