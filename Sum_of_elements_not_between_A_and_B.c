#include<stdio.h>
int main()
{
    int n,x,y,j,sum;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(j=0;j<n;j++){
        if(a[j]>=x&&a[j]<=y){
         continue;   
        }
        sum=sum+a[j];
    }
    printf("%d",sum);
}