#include<stdio.h>
int main()
{
    int a,b,r;
    scanf("%d%d",&a,&b);
    for(r=1;r<=b;r++)
    printf("%d x %d = %d
",a,r,a*r);
    
}