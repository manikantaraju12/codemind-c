#include<stdio.h>
int main()
{
    int i,k=0,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
{
    if(n%i==0)
    {k++;
    }
}

if(k==1)
printf("Prime");
else
printf("Not Prime");

}
