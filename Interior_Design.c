#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,t1,t2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    t1=x1+y1;
    t2=x2+y2;
    if(t2>t1)
    {
    printf("%d",t1);
    }
    else
    printf("%d",t2);
}