#include<stdio.h>
#include<math.h>

int main()
{
    int x[1000]={0};
    int N,i;
    int *p=&x[0];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        x[i]=600*cos(i*0.35);
        printf("%d",*(p+i));
        printf(" ");
    }
}
