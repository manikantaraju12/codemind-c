#include<stdio.h>
int main()
{
    int i,a,b,k=0,s=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s+=i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            k+=i;
        }
    }
    if(s==b&&k==a)
    {
        printf("Amicable");
    }
    else
    printf("Not Amicable");
}