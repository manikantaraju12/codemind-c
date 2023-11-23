#include<stdio.h>
int main()
{
    int i,a,b,f,lar=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
     f=(a%i==0 && b%i==0) ? i : 0;
     if(f!=0){
         lar=(lar<f) ? f : 0;  
     }
     }
     if(lar!=0){
         printf("%d",lar);
    }
    
}