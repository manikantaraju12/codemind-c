#include<stdio.h>
int main()
{
    int x,y;
    float z;
    scanf("%d%d",&x,&y);
    z=(x+y)/2.0;
    printf("Average of %d and %d is: %.2f",x,y,z);
}