#include<stdio.h>
int main()
{
    int a,b,k,s=0;
    scanf("%d",&a);
    b=a*a;
    while(b)
    {
        k=b%10;
        s=s+k;
        b=b/10;
    }
    if(a==s)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}