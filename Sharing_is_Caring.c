#include<stdio.h>
int main()
{
    int n,x,t;
    scanf("%d%d",&n,&x);
    t=(x*(x+1))/2;
    if(n>=t)
    printf("YES");
    else
    printf("NO");
}