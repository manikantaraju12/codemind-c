#include<stdio.h>
int main(){
    int n,i,j,x,y,e;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    scanf("%d%d",&x,&y);
    for(j=0;j<n;j++){
        if(a[j]>=x&&a[j]<=y){
            continue;
        }
       else printf("%d ",a[j]);
       e++;
    }
    if(e==0){
        printf("-1");
    }
}