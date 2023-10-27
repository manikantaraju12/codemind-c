#include<stdio.h>
int main()
{
    int t,s,b,x,y,z;
    scanf("%d%d%d",&t,&s,&b);
    x=(2*t*s*b*512);
    y=(x/1024);
    printf("%d KB",y);
}