#include<stdio.h>
int main()
{
    int n,s,t;
    scanf("%d",&n);
    t=n/4;
    if(n<=4)
    printf("1");
    else if(n%4==0)
    printf("%d",t);
    else
    printf("%d",t+1);
    
}