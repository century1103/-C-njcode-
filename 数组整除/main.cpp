#include<stdio.h>

int main()
{
    int T,x=0,y=0,i,n;
    int a[10]={0};
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<T;i++)
    {
        x=a[i];
        for(n=1;n<=x;n++)
        {
            if(x%(n*n)==0)
                y=n;
        }
        printf("%d",y);
        printf("\n");
    }

}
