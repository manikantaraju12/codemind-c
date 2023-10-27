#include<stdio.h>
int main()
{
    int x;
    float s,d,t;
    scanf("%d",&x);
    d=(1000*x);
    t=(60*60);
    s=(d/t);
    printf("%.2f",s);
}