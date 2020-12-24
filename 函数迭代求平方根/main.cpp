#include<stdio.h>
#include<math.h>

int PF(int a)
{
    double x=1,x1;
    while(fabs(x-x1)>1E-5)
    {
        x1=x;
        x=(x1+a/x1)/2;
    }
    return x;
}
int main()
{
    int b;
    double res=1;
    scanf("%d",&b);
    res=PF(b);
    printf("%.3f",res);
}
