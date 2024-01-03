#include<stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    if(n>=3)
    {
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("
");
    }
    for(k=i-2;k>=1;k--)
    {
        for(j=1;j<=k;j++){
            printf("*");
        }
        printf("
");
    }
}
else {
    printf("The pattern is not possible");
}
}
