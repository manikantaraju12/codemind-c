#include<stdio.h>
int main()
{
    int x,y,a;
    scanf("%d",&a);
    for(x=1;x<=a;x++)
    {
        for(y=1;y<=x;y++)
        {
            printf("*");
            
        }
        printf("
");
    }
}