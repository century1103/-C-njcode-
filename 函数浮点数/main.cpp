#include<stdio.h>

float max(float a,float b)
{
    if(b>=a)
        return b;
    else
        return a;
}
int main()
{
    float n1,n2,Max;
    scanf("%f%f",&n1,&n2);
    Max=max(n1,n2);
    printf("%.5f",Max);
}
