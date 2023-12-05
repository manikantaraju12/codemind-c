#include<stdio.h>
int main()
{
    int i,k=0,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0){
            k++;
        }
}
    printf("%d",k);
}