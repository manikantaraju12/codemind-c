#include<stdio.h>
int main()
{
    int i,m,n,k,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&m,&k);
        m=m-k;
        if((m-n)>=0)
        printf("YES
");
        else
        printf("NO
");
    }
    
}