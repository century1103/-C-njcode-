#include<stdio.h>

int main()
{
    int i,min,minloc,a[10];
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    min=a[0];
    minloc=0;
    for(i=1;i<10;i++)
    {
        if(a[i]<min)
       {
        min=a[i];
        minloc=i;
       }
    }
    printf("��СֵΪ%d\nλ��Ϊ%d",min,minloc);
}
