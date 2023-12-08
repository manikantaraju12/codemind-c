#include<stdio.h>
int main()
{
    int n,s,sq,d;
    scanf("%d",&n);
    sq=(n*(n+1)*(2*n+1))/6;
    s=((n*(n+1))/2)*((n*(n+1))/2);
    d=s-sq;
    printf("%d",d);
}