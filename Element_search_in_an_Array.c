#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int se,flag;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        {
            flag=1;
            break;
        }}
        if(flag==1)
        {
            printf("True");
            
        }
        else
        {
            printf("False");
        }
    
    
}