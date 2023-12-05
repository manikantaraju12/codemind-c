#include<stdio.h>
int main()
{
    int n,f,m,s=0;
    scanf("%d",&n);
    while(n)
    {
        f=n%10;
        if(s<=f)
        {
            s=f;
        }
        n=n/10;
    }
    printf("%d",s);
}