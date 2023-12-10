#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x==0){
        printf("1");
    }
    else{
        x=x*3;
        printf("%d",x);
    }
}