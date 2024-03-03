#include<stdio.h>
int main()
{
    int n,c[1000]={0},d=0,e,i,j,f=0;
    scanf("%d",&n);
    int a[n];
    e=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(c[i]==i)
        {
            f++;
            if(d<i)
            {
                d=i;
            }
            if(e>i)
            {
                e=i;
            }
        }
    }
    if(f>=1)
    {
    printf("%d %d",e,d);
    }
    else if(f==0)
    {
        printf("-1");
    }
}