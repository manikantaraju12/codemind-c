#include<stdio.h>
int main()
{
    int i,n,s,c,e;
    scanf("%d%d",&n,&e);
    n=n+1;
    for(i=n;i<e;i++){
    s=i*i;
    c=i*i*i;
    printf("%d %d %d
",i , s ,c);
    }
}
