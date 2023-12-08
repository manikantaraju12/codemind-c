#include<stdio.h>
int main()
{
    int n,r,a,b,t,f;
    scanf("%d%d",&a,&b);
    for(n=a;n<=b;n++)
    {
        f=1;
        t=n;
        while(t>0)
        {
            r=t%10;
            if(r==0 || n%r!=0)
            {
                f=0;
                break;
            }
            t/=10;
        }
        if(f==1)
        printf("%d ",n);
    }
    
}