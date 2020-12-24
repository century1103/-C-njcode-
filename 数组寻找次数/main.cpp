#include<stdio.h>

int main()
{
    int i,k,s;
    int a[10];
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    s=0;
    for(i=0;i<10;i++)
    {
        if(a[i]==k)
            s=s+1;
    }
    printf("%d出现的次数为%d",k,s);

}
