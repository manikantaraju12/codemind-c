#include<stdio.h>
int main()
{
    int n,l,s=0,p=1;
    scanf("%d",&n);
    while(n)
    {
        l=n%10;
        s=s+l;
        p=p*l;
        n/=10;
    }
    if(p==s) printf("Spy Number");
    else
    printf("Not Spy Number");
}